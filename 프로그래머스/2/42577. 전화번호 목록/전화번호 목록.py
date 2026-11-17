def solution(p):
    p.sort()
    for i in range(len(p)-1):
        if len(p[i]) <= len(p[i+1]) and p[i] == p[i+1][0:len(p[i])]:
            return False
    return True