def solution(array, commands):
    answer = []
    
    for i in range(0, len(commands)):
        temp = array.copy()
        if commands[i][0] == commands[i][1]:
            answer.append(array[commands[i][0]-1])
            continue
        temp = temp[commands[i][0]-1:commands[i][1]]
        temp.sort()
        print(temp)
        answer.append(temp[commands[i][2]-1])

    return answer