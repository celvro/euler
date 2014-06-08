from util import *

n = 285
while 1:
    n+=1
    num = n*(n+1)/2
    if is_pentagonal(num) and is_hexagonal(num):
        print num
        exit()
