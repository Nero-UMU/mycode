import socketserver

class chat_server(socketserver.ThreadingTCPServer):
    def handle(self):
        conn = self.request
        try:
            while True:
                data_b = conn.recv(1024)
                print('data_b = ', data_b)
                if conns.count(conn) == 0:
                    conns.append(conn)
                    name_s = data_b.decode('utf-8')
                    users.default(conn, name_s)
                    data_s = ''
                    data = 'welcome' + name_s + '!'
                else:
                    name_s = users.get(conn)
                    data_s = data_b.decode('utf-8')
                    data = name_s + ': ' + data_s
                print('data = ', data)
                data_b = data.encode('utf-8')
                for cn in conns:
                    cn.send(data_b)
                if data_s.upper()[0:3] == 'BYE':
                    print('%s is exited!' % name_s)
                    conns.remove(conn)
                    del(users[conn])
                    break;
        except Exception as e:
            print('Error is ', e)

users = {}
conns = []

ip = '192.168.118.145'
server = socketserver.ThreadingTCPServer((ip, 8080), chat_server)
print('waiting for connecting')
server.serve_forever()
