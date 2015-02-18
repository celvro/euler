max = 1000000
n = 4
factors = [0]*max

# Calculate factors for every number
for i in range(2,max):
    if factors[i]==0:
        for j in range(i,max,i):
            factors[j]+=1

for i in range(2,max):
    if factors[i:i+n]==[n]*n:
        print i
        break