# quick and dirty
count = 0

for g in range(200, -1, -200):
    for a in range(g, -1, -100):
        for b in range(a, -1, -50):
            for c in range(b, -1, -20):
                for d in range(c, -1, -10):
                    for e in range(d, -1, -5):
                        for f in range(e, -1, -2):
                            count+=1

print count