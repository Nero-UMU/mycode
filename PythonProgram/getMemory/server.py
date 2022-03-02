from inspect import getmembers
from webbrowser import get
import psutil
import socket

def getMemory():
    memory_status = psutil.virtual_memory()
    data = 'total = ' + str(memory_status.total)
    data = data + ',available = ' + str(memory_status.available)
    data = data + ',percent = ' + str(memory_status.percent)
    data = data + ',used = ' + str(memory_status.used)
    data = data + ',free = ' + str(memory_status.free)
    return data

s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
s.bind(('192.168.118.145', 2222))
print('bind UDP on port 2222...')
(info, addr) = s.recvfrom(1024)
data = getMemory()
s.sendto(data.encode('utf-8'), addr)
print('the client is ', addr)
print('send memory data is: ', data)
