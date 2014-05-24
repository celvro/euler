from math import sqrt

def prime(n):
    if n<2:
        return False
    return all(n%i for i in [2] + range(3, int(sqrt(n))+1, 2))


# return all primes up to n, fast as hell
def get_primes(n):
    numbers = range(3, n+1, 2)
    half = n//2
    initial = 4

    for step in xrange(3, n+1, 2):
        for i in xrange(initial, half, step):
            numbers[i-1]=0
        initial += 2*(step+1)

        if initial > half:
            return [2] + filter(None, numbers)


# return prime factors
def factors(n):
    x = []
    i = 2
    while n != 1:
        while not n%i:
            x.append(i)
            n /= i
        i += 1
    return x


# return all factors including 1 and itself
def divisors(n):
    x = []
    for i in range(1, int(sqrt(n)+1)):
        if not n%i:
            x.extend((i, n/i))
    return list(set(x))


def palindrome(n):
    return n == int(str(n)[::-1])


def prod(n): # return product of a list
    return reduce(lambda a,b: a*b, n)


# return dict of all collatz chains up to n
def collatz(n):
    def collatz_h(i):
        if not i in d:
            if i%2:
                d[i] = collatz_h(3*i + 1) + 1
            else:
                d[i] = collatz_h(i/2) + 1
        return d[i]
    d = {1:1}
    for i in xrange(1, n):
        collatz_h(i)
    return d


def n_choose_r(n, r):
    r = min(r, n-r)
    if r==0: return 1
    numer = prod( range(n, n-r, -1) )
    denom = prod( range(1, r+1) )
    return numer//denom