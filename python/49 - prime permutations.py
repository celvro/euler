from util import get_primes
from util import prime

from collections import defaultdict
import itertools

primes = [i for i in get_primes(10000) if i>1000]

count = defaultdict(int)
for p in primes:
    s = ''.join(sorted(str(p)))
    count[s] += 1
    
for c in count:
    p = [int(''.join(p)) for p in itertools.permutations(c)]
    p = filter(lambda x: prime(x) and x>1000, p)
    p = list(set(p))
    p.sort()
    
    for x in range(0, len(p)-1):
        for y in range(x+1, len(p)-1):
            z = 2*p[y] - p[x]
            if z in p:
                print p[x],p[y],z