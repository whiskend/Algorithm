def solution(participant, completion):
    answer = ''
    dict = {}
    
    for runner in participant:
        if runner not in dict:
            dict[runner] = 0
        dict[runner] += 1
        
    for runner in completion:
        dict[runner] -= 1
        
    for i in list(dict.keys()):
        if dict[i] == 1:
            answer = i        
    
    return answer