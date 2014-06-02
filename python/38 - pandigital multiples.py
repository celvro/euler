from util import pandigital

num = 0

for i in range(2,10000):
    string = str(i)
    if string[0] != '9': continue
    count = 2
    while len(string) < 9:
        string += str(i*count)
        count += 1
    if int(string)>num and pandigital(string, 9):
        num = int(string)

print num