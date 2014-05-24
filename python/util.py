from math import sqrt


def prime(n):
    if n==2 or n==3:
        return True
    if n<2:
        return False
    x = [2, 3]
    for i in xrange(5, int(sqrt(n))+1, 6):
        x.extend((i, i+2))
    return all(n%i for i in x)


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