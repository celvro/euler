p_val = 0
max_sol = 0
for p in range(12, 1000, 12):
    num_sol = 0
    for a in range(1, p//3):
        for b in range(a, p//2):
            c = p - (a+b)
            if a**2 + b**2 == c**2:
                num_sol += 1
    if num_sol >= max_sol:
        p_val = p
        max_sol = num_sol
print p_val