"""Dump follow_history for zero-page addresses from the debug server."""
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
    return buf.decode("utf-8", errors="replace").strip()


def send_cmd(sock, obj):
    sock.sendall((json.dumps(obj) + "\n").encode("utf-8"))
    return recv_line(sock)


def main():
    host = "127.0.0.1"
    port = 4370

    # Retry connect — game may still be starting up
    for attempt in range(30):
        try:
            sock = socket.create_connection((host, port), timeout=1.0)
            break
        except OSError:
            time.sleep(0.2)
    else:
        print("Failed to connect to debug server", file=sys.stderr)
        sys.exit(1)

    # Wait a bit to let RESET finish
    time.sleep(2.0)

    # Query frame
    print("=== frame ===")
    print(send_cmd(sock, {"cmd": "frame", "id": 1}))

    # Dump history for each followed address
    for i, addr in enumerate([0x0100, 0x0101, 0x0102, 0x0103, 0x0105, 0x0107, 0x0108]):
        print(f"\n=== follow_history $%04X ===" % addr)
        resp = send_cmd(
            sock,
            {"cmd": "follow_history", "addr": f"0x{addr:04X}", "limit": 50, "id": 100 + i},
        )
        try:
            obj = json.loads(resp)
            print(f"total writes: {obj.get('total')}")
            for e in obj.get("entries", []):
                print(
                    f"  frame={e['f']:6}  old={e['old']}  new={e['new']}  stack={e['stack']}"
                )
        except Exception as ex:
            print(f"(parse error: {ex})")
            print(resp)

    sock.close()


if __name__ == "__main__":
    main()
