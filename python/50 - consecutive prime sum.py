from util import prime
from util import get_primes

p = get_primes(3943)
m = 0
num = 0

for i in range(len(p)):
    for j in range(i+1,len(p)):
        if prime(sum(p[i:j])) and j-i>m:
            m = j-i
            num = sum(p[i:j])
print num