def solution(progresses, speeds):
    answer = []
    # (진척도, 속도) // 남은양: 100-진척도
    remain = [100]*len(progresses)
    remain = [x - y for x, y in zip(remain, progresses)]
    
    # 남은양을 속도로 나누고 올림. 올림하는 나눗셈: (a+b-1) // b ex: 7 / 3
    day = [(x+y-1)//y for x, y in zip(remain, speeds)]
    print(day)
    # day를 순회하면서 처음 start 값을 잡고 그거보다 큰 게 나오면, 현재 값 앞까지 end로. 차를 answer에 추가.
    start = 0
    for i in range(0, len(day)):
        print(i, len(day)-1)
        if day[start] < day[i]: # 같으면 어떡하지?
            end = i-1
            answer.append(end-start+1)
            start = i
        if i == len(day)-1:
            end = i
            answer.append(end-start+1)
    return answer