n = int(input())
a = [*map(int, input().split())]
a.sort()
m = int(input())
b = [*map(int, input().split())]


def bisearch(target, start, end):
    while start <= end:
        mid = (start + end) // 2

        if a[mid] > target:
            end = mid - 1
        elif a[mid] < target:
            start = mid + 1
        else:
            return '1'
    return '0'


print(*[bisearch(i, 0, len(a)-1) for i in b])
