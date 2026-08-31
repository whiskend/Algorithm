def solution(array):
    answer = 0
    array_set = set(array)
    
    max = 0
    for i in array_set:
        if array.count(i) > max:
            max = array.count(i)
            answer = i
        
    
    max_number = 0
    for i in array_set:
        if array.count(i) == max:
            max_number +=1
    
    if max_number > 1:
        return -1
    
    print(answer)
    
    return answer