import socket

def main():
    cli = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    print('connecting...')
    cli.connect(('192.168.118.145', 8080))
    print('success!')
    str1 = input('I want to send: ')
    if str1 == '###':
        pass
    else:
        cli.send(str1.encode('utf-8'))
        while True:
            str2 = cli.recv(1024)
            str3 = str(str2.decode('utf-8'))
            print(str3)
            if str3 == '###':
                break
            str4 = input('I return to server:')
            if str4 == '###':
                break
            cli.send(str4.encode('utf-8'))
    cli.close()

if __name__ == '__main__':
    main()