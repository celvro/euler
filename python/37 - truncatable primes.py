from util import truncatable_prime

count,i = 0,11
t_sum = 0
while count<11:
    if truncatable_prime(i):
        t_sum+=i
        count+=1
    i+=2

print t_sum