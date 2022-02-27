from curses import noecho
import socket
import os

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect(('192.168.118.145', 8080))
filename = 'HelloWorld.html'
print('I want file\'s name is:', filename)
s.send(filename.encode('utf-8'))
str1 = s.recv(1024)
str2 = str1.decode('utf-8')
if str2 == 'no':
    print('sorry get %s failed' % filename)
else:
    s.send(b'I am ready!')
    newName = 'ByeByeWorld.html'
    size = 1024
    with open(newName, 'wb') as f:
        while True:
            data = s.recv(size)
            f.write(data)
            if len(data) < size:
                break
    print('Download file %s successfully!' %newName)
s.close()
