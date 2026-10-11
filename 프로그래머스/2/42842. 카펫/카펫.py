def solution(brown, yellow):
    entire = brown + yellow
    mid = int(entire**(1/2)) + 1    
    
    divisor = []
    for i in range(1, mid):
        if entire % i == 0:
            divisor.append((entire//i, i))
    
    for w, h in divisor:
        if (w+h)*2-4 == brown:
            return [w,h]