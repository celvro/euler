# Just find a triplet where sum is divisor of 1000 and scale it to save time
for a in xrange(1, 100):
    for b in xrange(a, 100):
        for c in xrange(b, 100):
            if a*a+b*b==c*c and not 1000%(a+b+c):
                print a*b*c * (1000/(a+b+c))**3
                exit()