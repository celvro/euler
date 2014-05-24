inp = open("13 - numbers.txt")

numbers = []
for line in inp:
    numbers.append(int(line[0:11]))

print str(sum(numbers))[0:10]