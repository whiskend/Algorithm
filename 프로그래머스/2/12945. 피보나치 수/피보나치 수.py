def solution(n):
    answer = 0
    a0 = 0
    a1 = 1
    a2 = 1
    
    for i in range(n-1):
        temp = a0+ a1
        a0 = a1
        a1 = temp
        
    return temp %1234567