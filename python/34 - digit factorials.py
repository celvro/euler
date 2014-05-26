from util import digit_factorial


print sum(x for x in range(99999) if digit_factorial(x))