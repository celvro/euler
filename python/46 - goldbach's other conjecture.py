from util import get_primes
from util import prime
from math import sqrt

n = 33
while 1:
    n+=2
    if not prime(n):
        primes = get_primes(n)
        for p in primes:
            if sqrt((n-p)/2).is_integer():
                break
        else:
            print n
            exit()