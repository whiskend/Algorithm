def solution(s):
    answer = True
    
    p = 0
    y = 0
    for c in s:
        if c == 'p' or c == 'P':
            p += 1
        if c == 'y' or c == 'Y':
            y += 1
            
    if p == y:
        return True
    else:
        return False