from util import is_triangle_number
from util import word_value

for line in open("42 - words.txt"):
    line = line.replace('"','').strip()
    words = line.split(',')
    
x = 0    
for word in words:
    if(is_triangle_number(word_value(word))):
        x+=1
    
print x
    