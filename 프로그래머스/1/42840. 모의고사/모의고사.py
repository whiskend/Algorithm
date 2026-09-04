def solution(answers):
    answer = []
    p1 = [1, 2, 3, 4, 5]
    p2 = [2, 1, 2, 3, 2, 4, 2, 5]
    p3 = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]
    c = [0, 0, 0] # correct
    
    for i in range(0, len(answers)):
        if p1[i % 5] == answers[i]:
            c[0] += 1
            
        if p2[i % 8] == answers[i]:
            c[1] += 1
            
        if p3[i % 10] == answers[i]:
            c[2] += 1
    
    m = max(c)
    for i in range(0,3):
        if c[i] == m:
            answer.append(i+1)
            
    return answer