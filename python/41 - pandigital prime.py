from util import prime
import itertools

x = []
for i in itertools.permutations('1234567'):
    num = (''.join(i))[::-1]
    if prime(int(num)):
        x.append(num)

print max(x)
        

