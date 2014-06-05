i = 0
num = ''
while len(num) < 1000001:
    num += str(i)
    i+=1
print int(num[1])*int(num[10])*int(num[100])*int(num[1000])*int(num[10000])*int(num[100000])*int(num[1000000])
