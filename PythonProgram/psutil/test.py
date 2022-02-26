import psutil

info = psutil.net_if_addrs()
print("info = ", info)
lo = info['lo']
print('lo = ', lo)
print('lo[0] = ', lo[0])
print('lo[0].address = ', lo[0].address)

