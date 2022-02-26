import psutil

info = psutil.net_io_counters()
print(info)
