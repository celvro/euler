from util import recip_len


print max(recip_len(n)+1 for n in xrange(1000, 1, -1))