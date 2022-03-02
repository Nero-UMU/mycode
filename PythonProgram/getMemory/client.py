import socket

s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
serverAdd = ('192.168.118.145', 2222)
s.bind(('192.168.118.145', 3333))
s.sendto(b'memory info', serverAdd)
(data, addr) = s.recvfrom(1024)
if addr == serverAdd:
    print('I get it')
    info = data.decode('utf-8')
    print('memory status is:')
    new_info = info.split(',')
    for each in new_info:
        print(each)
s.close()
