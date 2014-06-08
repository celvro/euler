from itertools import combinations
from operator import abs

#apparently membership testing is much faster for sets than lists
p = set(i*(3*i-1)/2 for i in range(1,3000))
c = combinations(p, 2)

for k,v in c:
    if k+v in p and abs(k-v) in p:
        print abs(k-v)
