def solution(N, stages):
    answer = []
    # 1~N까지 돌면서, i스테이지에서 분모는 이전까지 누적된 수를 빼고, 분자는 세면 된다.
    remain = [0 for i in range(1, N+3)] # 몇 스테이지에 몇 명이? 
    for s in stages:
        remain[s] += 1
    
    fail = [0 for i in range(1, len(remain)+1)] # 각 스테이지의 실패율
    passer = len(stages)
    
    for i in range(1, len(remain)):
        if passer == 0:
            continue
        fail[i] = remain[i] / passer
        passer -= remain[i]
    
    fail = dict(enumerate(fail))
    fail.popitem()
    del fail[0]
    answer = sorted(fail, key=fail.get, reverse=True)
    
    return answer