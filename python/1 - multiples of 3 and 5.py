# prints 233168
print sum(x for x in xrange(1000) if not (x%5 and x%3))