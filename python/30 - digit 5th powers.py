num=0
for i in range(2,300000):
    sum=0
    j=i
    while j>0:
        digit=j%10
        sum+=digit**5
        j=int(j/10)
    if sum == i:
        num+=sum
print num
