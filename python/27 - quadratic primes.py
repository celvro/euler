MAX = 1000
products = []

a,b = 1,0
while b < MAX:
    # Magic formula for b based on a
    b = a*a/2 - a*a/4 + 41
    if b < MAX:
        products.append(-a*b)
    a+=2

print min(products)