from ntpath import join
import socket

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
print('s = ', s)
s.connect(('www.jju.edu.cn', 80))
print('s = ', s)
s.send(b'GET / HTTP/1.1\r\nHost:www.jju.edu.cn\r\nConnection: close\r\n\r\n')
buffer = []
while True:
    d = s.recv(1024)
    if d:
        buffer.append(d)
    else:
        break

s.close()
data = b''.join(buffer)
header, html = data.split(b'\r\n\r\n')
print('header = ', header)
print('header.decode = ', header.decode('utf-8'))
print('html = ', html)
with open('lol.html', 'wb') as f:
    f.write(html)
