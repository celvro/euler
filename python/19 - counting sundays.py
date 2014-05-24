from datetime import datetime
count = 0
for y in range(1901, 2001):
    for m in range(1,13):
        if datetime(y,m,1).weekday()==6:
            count+=1
print count