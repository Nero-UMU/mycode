import netifaces

info = netifaces.gateways()
print('info = ', info)
print('gateway = ', info['default'][2][0])
