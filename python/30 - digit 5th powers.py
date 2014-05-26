LIMIT = 6 * 9**5

print sum(i for i in xrange(2, LIMIT) if i==sum(int(x)**5 for x in str(i)))