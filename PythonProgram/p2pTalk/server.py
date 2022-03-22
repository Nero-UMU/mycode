from json.tool import main
import socket
import get_ip

def main():
    serverIp = get_ip.get_host_ip()
    ser = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    ser.bind((serverIp, 8080))
    ser.listen(1)
    print('connecting...')
    (cli, addr) = ser.accept()
    print('client address is: ', addr[0])
    while True:
        str1 = cli.recv(1024)
        str2 = str(str1.decode('utf-8'))
        print(str2)
        if str2 == '###':
            break
        str3 = input('I return to client: ')
        if str3 == '###':
            break
        cli.send(str3.encode('utf-8'))
    ser.close()


if __name__ == "__main__":
    main()
