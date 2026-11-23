import sys
input = sys.stdin.readline

T = int(input())

for _ in range(T):
    N = int(input())

    a_max = 0
    b_max = 0
    c_max = 0
    fail = False

    for j in range(N):
        a, b, c, d = map(int, input().split())

        a_max = max(a_max, a)
        b_max = max(b_max, b)
        c_max = max(c_max, c)

        su = a_max + b_max + c_max + j + 1

        if su > d:
            fail = True

    print('NO' if fail else 'YES')