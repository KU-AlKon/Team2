n, k = map(int, input().split())
a = [*range(1, n + 1)]
r = []
i = 0
for _ in range(n):
    i = (i + k - 1) % len(a)
    r.append(a.pop(i))
print(f"<{', '.join(map(str, r))}>")