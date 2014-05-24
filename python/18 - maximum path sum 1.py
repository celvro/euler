from util import max_path
inp = open("18 - triangle path.txt")

grid = []
for line in inp:
    grid.append([int(x) for x in line.split(' ')])

print max_path(grid)