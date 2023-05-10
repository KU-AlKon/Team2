import sys
input = sys.stdin.readline

n = int(input())
a = [[*map(int, input().split())] for _ in range(n)]
a.sort(key=lambda x: (x[1], x[0]))
t = 0
r = 0
for s, e in a:
    if s >= t:
        t = e
        r += 1
print(r)