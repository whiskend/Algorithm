def solution(m, n, puddles):
    dp = [[0] * m for _ in range(n)]
    pud = set()
    for i in range(len(puddles)):
        pud.add((puddles[i][1] - 1, puddles[i][0] - 1))
        
    for i in range(len(dp)):
        if (i, 0) in pud:
            break
        dp[i][0] = 1
    for j in range(len(dp[0])):
        if (0, j) in pud:
            break
        dp[0][j] = 1
    
    for i in range(1, len(dp)):
        for j in range(1, len(dp[i])):
            if (i, j) in pud:
                continue
            dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % 1000000007
                
    return dp[n-1][m-1]