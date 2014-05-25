from util import divisors

# Lowest number is 20162 according to wolfram alpha
abundant = [x for x in xrange(20162) if sum(divisors(x))-x>x]

sums = set([])
for i in range(len(abundant)):
    for j in range(i, len(abundant)):
        h = abundant[i] + abundant[j]
        if h > 20162: break
        sums.add(h)

print sum( set(i for i in range(20162)) - sums )