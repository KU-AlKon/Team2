n = int(input())


r = []
for _ in range(n):
    r.append(['*' for _ in range(n)])


def draw(size, sx=0, sy=0):
    l = size // 3
    wx, wy = l + sx, l + sy
    for y in range(wy, wy+l):
        for x in range(wx, wx+l):
            r[y][x] = ' '
    
    if size == 3:
        return
    
    for y in range(sy, sy+size, l):
        for x in range(sx, sx+size, l):
            draw(l, x, y)


draw(n)
print(*[''.join(i) for i in r], sep='\n')
