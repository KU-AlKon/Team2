from collections import deque

T = int(input())
for _ in range(T):
    p = input()
    n = int(input())
    if n:
        x = deque(map(int, input().strip('[]').split(',')))
    else:
        input()
        x = deque()
    r = False
    for c in p:
        if c == 'R':
            r = not r
        elif c == 'D':
            if not x:
                print('error')
                break
            x.pop() if r else x.popleft()
    else:
        print(f"[{','.join(map(str, reversed(x) if r else x))}]")