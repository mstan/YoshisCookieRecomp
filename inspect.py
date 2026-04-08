"""Inspect CPU state and stack page via debug server."""
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
    # Retry connect
    for _ in range(30):
        try:
            sock = socket.create_connection(("127.0.0.1", 4370), timeout=1.0)
            break
        except OSError:
            time.sleep(0.2)
    else:
        print("Failed to connect", file=sys.stderr)
        sys.exit(1)

    time.sleep(2.0)

    print("=== frame ===")
    print(send_cmd(sock, {"cmd": "frame", "id": 1}))

    print("\n=== get_registers ===")
    print(send_cmd(sock, {"cmd": "get_registers", "id": 2}))

    print("\n=== mapper_state ===")
    print(send_cmd(sock, {"cmd": "mapper_state", "id": 3}))

    for base in (0x0100, 0x0200):
        print(f"\n=== read_ram ${base:04X} len 256 ===")
        resp = send_cmd(sock, {"cmd": "read_ram", "addr": f"0x{base:04X}", "len": 256, "id": 4})
        try:
            obj = json.loads(resp)
            hx = obj.get("hex", "")
            for row in range(0, len(hx), 32):
                bytes_hex = hx[row : row + 32]
                addr = base + row // 2
                pairs = " ".join(bytes_hex[i : i + 2] for i in range(0, len(bytes_hex), 2))
                print(f"${addr:04X}: {pairs}")
        except Exception as e:
            print(f"parse err: {e}")
            print(resp)

    print("\n=== ppu_state ===")
    print(send_cmd(sock, {"cmd": "ppu_state", "id": 5}))

    sock.close()


if __name__ == "__main__":
    main()
