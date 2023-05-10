N, G, K = map(int, input().split())
I = [[*map(int, input().split())] for _ in range(N)]
m = {}


def f(x):
    try:
        return m[x]
    except KeyError:
        pass
    res = 0
    optional = []
    for s, l, o in I:
        g = s * max(1, x - l)
        if o:
            optional.append(g)
        else:
            res += g
    optional.sort(reverse=True)
    res += sum(optional[K:])
    m[x] = res <= G
    return m[x]


low = 1
high = 10 ** 10
while low + 1 < high:
    mid = (low + high) // 2
    if f(low) == f(mid):
        low = mid
    else:
        high = mid
print(low)
