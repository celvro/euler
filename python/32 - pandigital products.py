from util import pandigital

products = set([])
for i in range(1,2000):
    for j in range(1, 99):
        if pandigital(str(j)+str(i)+str(i*j), 9):
            products.add(i*j)
            break

print sum(products)