n = int(input())
low = 0
high = 2 ** 32

while low <= high:
    mid = (low + high) // 2
    if mid ** 2 >= n:
        if (mid - 1) ** 2 < n or mid == 0:
            print(mid)
            break
        high = mid - 1
    else:
        low = mid + 1
