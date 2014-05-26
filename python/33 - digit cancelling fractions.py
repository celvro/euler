from fractions import Fraction


def cancels(num, denom):
    f = Fraction(num, denom)
    a1, a2 = num/10, num%10
    b1, b2 = denom/10, denom%10

    return f == Fraction(a1, b2) or f == Fraction(a2, b1)

frac = Fraction(1,1)
for i in range(10, 100):
    # ignore multiples of 10 and doubles, 11, 22, 33 etc.
    if i%10 and i%10!=i/10:
        # j should be in range x1-x9 where x is the 10s place of i
        for j in range(10*(i%10) + 1, 10*(i%10 + 1)):
            if cancels(i,j):
                frac *= Fraction(i,j)

print frac