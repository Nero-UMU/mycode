import socket
import os

def sendFile(conn):
    str1 = conn.recv(1024)
    filename = str1.decode('utf-8')
    print('The client want my file:', filename)
    if os.path.exists(filename):
        print('I have file', filename)
        conn.send(b'yes')
        str2 = conn.recv(1024)
        print(str2.decode('utf-8'))
        size = 1024
        with open(filename, 'rb') as f:
            while True:
                data = f.read(size)
                conn.send(data)
                if (len(data) < size):
                    break
        print(filename, 'is upload successfully!')
    else:
        print('Sorry I don\'t have file:', filename)
        conn.send(b'no')

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.bind(('192.168.118.145', 8080))
s.listen(1)
print('waitint for connecting...')
(conn, addr) = s.accept()
sendFile(conn)
s.close()
