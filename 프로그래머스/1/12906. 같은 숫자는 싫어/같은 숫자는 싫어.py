def solution(arr):
    answer = []
    end = len(arr)-1
    
    for i in range(0, end):
        if arr[i] == arr[i+1]:
            continue
        elif arr[i] != arr[i+1]:
            answer.append(arr[i])
            
    answer.append(arr[end])
    
    return answer