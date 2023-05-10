N = int(input())
x = list(map(int, input().split()))
print('YES' if all(((i+n)%2 for n, i in enumerate(x))) else 'NO')