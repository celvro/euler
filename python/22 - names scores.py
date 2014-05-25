for line in open("22 - names.txt"):
    line = line.replace('"','').strip()
    names = line.split(',')

names.sort()

scores = []
for i in range(len(names)):        # 65 is the value returned by ord('A')
    scores.append((i+1) * sum(ord(c)-64 for c in names[i]))

print sum(scores)