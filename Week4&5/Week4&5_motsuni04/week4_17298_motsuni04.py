from collections import deque

n = int(input())
a = [*map(int, input().split())]
m = deque([a[-1]])
r = [-1]
for i in range(n - 2, -1, -1):
    while m:
        if m[-1] > a[i]:
            r.append(m[-1])
            break
        m.pop()
    else:
        r.append(-1)
    m.append(a[i])
print(*r[::-1])