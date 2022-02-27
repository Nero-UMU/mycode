import socket

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.settimeout(0.5)
ip = '192.168.118.145'
for port in range(5000, 10000):
    result = s.connect_ex((ip, port))
    if result == 0:
        print(port, 'is opened!')
s.close()
