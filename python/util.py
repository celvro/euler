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


def factors(n):
    x = []
    i = 2
    while n != 1:
        while not n%i:
            x.append(i)
            n /= i
        i += 1
    return x


def palindrome(n):
    return n == int(str(n)[::-1])


def prod(n): # return product of a list
    return reduce(lambda a,b: a*b, n)