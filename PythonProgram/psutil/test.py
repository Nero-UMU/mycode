import psutil

info = psutil.net_if_addrs()
print("info = ", info)
print('\n')
lo = info['lo']
print('lo = ', lo)
print('lo[0] = ', lo[0])
print('lo[0].address = ', lo[0].address)

print('\n')
wlp1s0 = info['wlp1s0']
print('wlp1s0 = ', wlp1s0)
print('wlp1s0[0] = ', wlp1s0[0])
print('wlp1s0[0].address = ', wlp1s0[0].address)

