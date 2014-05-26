import util

# kind of slow..
primes = util.get_primes(1000000)
print len([x for x in primes if util.circular_prime(x)])

# now moving into uncharted territory