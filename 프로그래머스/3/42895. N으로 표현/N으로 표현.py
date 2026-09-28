import math
def solution(N, number):
    dp = [set() for _ in range(9)]
    dp[1] = {N}
    if number in dp[1]:
            return 1
    dp[2] = {N-N, N//N, N+N, N*N, N*10 + N}
    if number in dp[2]:
            return 2
    
    for curr in range(3,9):
        s = 0
        for n in range(curr):
            s += N*(10**n)
        dp[curr].add(s)

        a = 1
        while True:
            b = curr - a
            l1, l2 = list(dp[a]), list(dp[b])
            for i in l1:
                for j in l2:
                    dp[curr].update([i-j, j-i, i+j, i*j])
                    if j:
                        dp[curr].add(i//j)
                    if i:
                        dp[curr].add(j//i)
            if b-a <= 1:
                break
            a += 1
        if number in dp[curr]:
            return curr
    
    return -1