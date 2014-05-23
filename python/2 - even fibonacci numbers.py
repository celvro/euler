# print sum of even fibonacci numbers less than 4 million
# 4613732
x = [1, 1]
while( x[-1]<4000000 ):
    x.append(x[-1]+x[-2])
print sum(i for i in x if not i%2)