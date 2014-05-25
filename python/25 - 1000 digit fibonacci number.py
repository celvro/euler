x = [1, 1]

while len(str(x[-1])) < 1000:
    x.append(x[-1]+x[-2])

print x.__len__()