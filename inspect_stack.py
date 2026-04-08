"""Dump stack_first_drop snapshot + surrounding stack writes."""
import json
import socket
import sys
import time


def recv_line(sock, timeout=5.0):
    sock.settimeout(timeout)
    buf = b""
    while b"\n" not in buf:
        chunk = sock.recv(65536)
        if not chunk:
            break
        buf += chunk
    line, _, _ = buf.partition(b"\n")
    return line.decode("utf-8", errors="replace").strip()


def send_cmd(sock, obj):
    sock.sendall((json.dumps(obj) + "\n").encode("utf-8"))
    return recv_line(sock)


def main():
    port = int(sys.argv[1]) if len(sys.argv) > 1 else 4370
    for _ in range(30):
        try:
            sock = socket.create_connection(("127.0.0.1", port), timeout=1.0)
            break
        except OSError:
            time.sleep(0.2)
    else:
        print(f"Failed to connect port {port}", file=sys.stderr)
        sys.exit(1)

    time.sleep(3.0)

    print("=== frame ===")
    print(send_cmd(sock, {"cmd": "frame", "id": 1}))

    print("\n=== get_registers ===")
    print(send_cmd(sock, {"cmd": "get_registers", "id": 2}))

    print("\n=== stack_first_drop ===")
    drop_resp = send_cmd(sock, {"cmd": "stack_first_drop", "id": 3})
    print(drop_resp)
    drop = {}
    try:
        drop = json.loads(drop_resp)
    except Exception:
        pass

    print("\n=== stack_trace_history (before drop, last 200) ===")
    resp = send_cmd(
        sock,
        {"cmd": "stack_trace_history", "before_drop": 1, "limit": 200, "id": 4},
    )
    try:
        obj = json.loads(resp)
        entries = obj.get("entries", [])
        print(f"total={obj.get('total')} returned={obj.get('returned')}")
        for e in entries:
            d = e.get('d', '?')
            print(
                f"  seq={e['seq']:<8} f={e['f']:<5} {d} s={e['s']}  val={e['v']}  fn={e['fn']}"
            )
    except Exception as ex:
        print(f"parse err: {ex}\n{resp}")

    print("\n=== stack_trace_history (latest 20) ===")
    resp = send_cmd(
        sock,
        {"cmd": "stack_trace_history", "limit": 20, "id": 5},
    )
    try:
        obj = json.loads(resp)
        entries = obj.get("entries", [])
        print(f"total={obj.get('total')} returned={obj.get('returned')}")
        for e in entries:
            d = e.get('d', '?')
            print(
                f"  seq={e['seq']:<8} f={e['f']:<5} {d} s={e['s']}  val={e['v']}  fn={e['fn']}"
            )
    except Exception as ex:
        print(f"parse err: {ex}\n{resp}")

    sock.close()


if __name__ == "__main__":
    main()
