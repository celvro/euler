from util import divisors

count = 1
n = 0

while 1:
    n += count
    count += 1
    if(len(divisors(n)) > 500):
        print n
        exit()