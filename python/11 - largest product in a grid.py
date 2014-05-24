from util import prod

input = open("11 - grid.txt")
grid = []

for line in input:
    grid.append([int(x) for x in line.split(' ')])

x = []
for i in range(len(grid)):
    for j in range(len(grid[i])):
        if i <= len(grid)-4:
            x.append(prod([grid[i+k][j] for k in range(0,4)]))
            if j <= len(grid[i])-4:
                x.append(prod([grid[i+k][j+k] for k in range(0,4)]))
            if j >= 4:
                x.append(prod([grid[i+k][j-k] for k in range(0,4)]))
        if j <= len(grid[i])-4:
            x.append(prod([grid[i][j+k] for k in range(0,4)]))

print max(x) # 70600674