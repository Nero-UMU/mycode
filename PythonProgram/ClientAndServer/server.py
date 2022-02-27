from base64 import encode
import socket

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.bind(('192.168.118.145', 8080))  #绑定服务端ip地址和端口
s.listen(1)   #监听，最大可接入1个
print('please wait for connecting...')
(conn, addr) = s.accept()   #接受来自客户端的连接
print('conn = ', conn)
print('addr = ', addr)
while True:
    str1 = conn.recv(1024)
    str2 = str(str1, encoding='utf-8')
    print('I have received a string is: ', str2)
    str3 = str2.upper()
    conn.send(str3.encode('utf-8'))
    if str2 == '.':
        break

conn.close()
s.close()
