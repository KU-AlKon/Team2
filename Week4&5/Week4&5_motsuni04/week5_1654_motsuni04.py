import sys
input = sys.stdin.readline

k, n = map(int, input().split())
x = [int(input()) for _ in range(k)]


def f(t):
    return sum((i // t for i in x)) >= n


def binary_search(start, end):
    while start + 1 < end:
        mid = (start + end) // 2
        if f(start) == f(mid):
            start = mid
        else:
            end = mid
    return start


print(binary_search(1, max(x) + 1))
