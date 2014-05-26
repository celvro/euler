SIZE = 1001
num, n_sum, interval = 1, 1, 2

while num < SIZE*SIZE:
    for i in range(4):
        num += interval
        n_sum += num
    interval += 2

print n_sum