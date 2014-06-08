from itertools import permutations
from util import sub_str_divisible

# Takes almost 20 seconds, probably much faster to build the permutations
# in reverse, starting with 3 digit multiples of 17, then pick from remaining
# numbers to get multiples of 13, 11, etc.
total = 0
for i in permutations('1234567890'):
    str = ''.join(i)
    if sub_str_divisible(str) :
        total += int(str)

print total

