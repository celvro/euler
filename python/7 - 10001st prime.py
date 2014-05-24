from util import prime


count, i = 0, 0
while count < 10001:
    i += 1
    if prime(i):
        count += 1

print i