from multiprocessing import Pool
import os
import socket
import getIp

ip = getIp.get_host_ip()

def scan_port(ports):
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.settimeout(1)
    for port in range(ports, ports + 4096):
        result = s.connect_ex((ip, port))
        if result == 0:
            print('I am process %d, port %d is opennd' % (os.getpgid(), port))

    s.close()

if __name__ == '__main__':
    p = Pool(16)
    for k in range(16):
        p.apply_async(scan_port, args=(k * 4096,))
    p.close()
    p.join()
    print('finished!')
