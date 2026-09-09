from collections import deque

def solution(numbers, target):
    count = 0
    su = 0
    n = numbers[0]
    numbers = numbers[1:]
    
    # 종료: numbers가 비어있으면 // 상태 전달: 더하는건 윗 줄. 빼는 건 아랫 줄.
    def recursion(n, target, su, numbers):
        # print(f"n:", n)
        su += n
        if not numbers:
            # print(f"su:", su)
            if su == target:
                return 1
            return 0
        
        n = numbers[0]
        return recursion(n, target, su, numbers[1:]) + recursion(-n, target, su, numbers[1:])
    
    count = recursion(n, target, su, numbers)
    count += recursion(-n, target, su, numbers)
    return count