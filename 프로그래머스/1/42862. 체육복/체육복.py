def solution(n, lost, reserve):
    answer = 0
    # 순서. 앞 or 뒤. 최대한 많은 사람이 획득. lost: 획득X. 
    # lost를 순회 > 앞뒷번호가 reserve에 존재하는지 확인 lost-1&lost+1 > count++
    # n-len(lost) + count
    
    borrow = 0
    lost2 = lost.copy()
    reserve2 = reserve.copy()
    
    for i in lost2:
        if i in reserve2:
            reserve.remove(i)
            lost.remove(i)
    lost.sort()
    reserve.sort()
    for i in lost:
        if i-1 in reserve:
            reserve.remove(i-1)
            borrow += 1
        elif i+1 in reserve:
            reserve.remove(i+1)
            borrow +=1
        
        

    answer = n - len(lost) + borrow
    return answer