from math import sqrt
from math import factorial

def prime(n):
    if n<2: return False
    if n==2: return True
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
    return str(n) == str(n)[::-1]

# return product of a list
def prod(n):
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

# return max path through a triangle pyramid like pascal's
def max_path(n):
    for i in range(len(n)-2, -1, -1):  # start from the bottom and combine
        for j in range(len(n[i])):
            n[i][j] += max(n[i+1][j], n[i+1][j+1])
    return n[0][0]

# return list of all amicable numbers below n
def amicable_numbers(n):
    x = []
    i = 0
    while i < n:
        d = sum(divisors(i))-i
        if sum(divisors(d))-d == i and i!=d:
            x.extend((i,d))
            i = d+1
        i += 1
    return x

# return the (n+1)th permutation of s
def nth_perm(s, n):
    if len(s)<2:
        return s
    quot, n = divmod(n, factorial(len(s)-1))
    return s[quot] + nth_perm(s[:quot] + s[quot+1:], n)

# length of n's reciprocal is smallest k such that n divides 10^k - 1
def recip_len(n):
    for k in xrange(1,n):
        if (10**k - 1)%n == 0:
            return k
    return 1

def pandigital(n, length):
    return ''.join(sorted(str(n))) == ''.join(str(x) for x in range(1,length+1))

# whether n is equal to the sum of factorial of it's digits
def digit_factorial(n):
    if n<3: return False
    return n == sum(factorial(int(x)) for x in str(n))

# return whether all rotations of n are prime
def circular_prime(n):
    num = str(n)
    for i in range(len(num)):
        if not prime(int(num)): return False
        num = num[-1] + num[:-1]
    return True

def truncatable_prime(n):
    # left to right
    num = str(n)
    while num:
        if not prime(int(num)): return False
        num = num[1:]

    # right to left
    num = str(n)
    while num:
        if not prime(int(num)): return False
        num = num[:-1]

    return True

# Return sum of character values where A=1, Z=26
def word_value(str):
    return sum(ord(c)-64 for c in str)
    
def is_triangle(n):
    i = int(sqrt(2*n))
    return 2*n == i*(i+1)

def sub_str_divisible(s):
    primes = [2,3,5,7,11,13,17]
    return all(int(s[i:i+3])%primes[i-1]==0 for i in range(1,8))

def is_pentagonal(n):
    num = (1+sqrt(1+24*n))/6
    return num.is_integer()