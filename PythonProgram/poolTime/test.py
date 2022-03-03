import imp
from multiprocessing import Pool
import time

def haveASleep(num):
    for i in range(10):
        print(num, 'have %d good sleep' % i)
        time.sleep(num / 10)

p = Pool(16)
for k in range(10):
    p.apply_async(haveASleep, args=(k,))
p.close()
p.join()
print('finished!')
