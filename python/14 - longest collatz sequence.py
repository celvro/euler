from util import collatz

d = collatz(1000000)
i = max(d, key=d.get)
print i, d[i]