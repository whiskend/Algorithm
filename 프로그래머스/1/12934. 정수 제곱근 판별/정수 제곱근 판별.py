import math
def solution(n):
    x = math.sqrt(n)
    if x.is_integer():
        x += 1
        return x*x 
    return -1