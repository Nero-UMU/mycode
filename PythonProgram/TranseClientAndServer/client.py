import socket

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect(('192.168.118.145', 8080))
print('Connected server!')
while True:
    str1 = input('I want to change:')
    s.send(str1.encode('utf-8'))
    if str1 == '.':
        break
    str2 = s.recv(1024)
    str3 = str(str2, encoding='utf-8')
    print('The original word is: ', str1, '\tThe processed is: ', str3)
s.close()
