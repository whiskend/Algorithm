# K1 · 이벤트 집계
# 자체 연습문제.
#
# 제한 시간: 35분.
# records의 각 문자열은 '사용자ID 이벤트'입니다.
# 이벤트는 click 또는 view입니다.
#
# 클릭한 사용자만 [사용자ID, 클릭수]로 반환하세요.
# 클릭수 내림차순, 동률이면 사용자ID 사전순으로 정렬하세요.
# 중복 기록도 모두 별개의 이벤트입니다. view만 있는 사용자는 제외하세요.
#
# 입력: 0~100,000개. ID: 소문자·숫자 1~20자.
# 공백은 정확히 하나. 형식은 항상 유효. 입력 변경 금지.
# 결과는 print가 아니라 return으로 반환하세요.
#
# 예:
# records = ['bo click', 'al view', 'al click',
#            'bo view', 'al click', 'cy click']
# 반환: [['al', 2], ['bo', 1], ['cy', 1]]
#
# 빈 입력 -> []
# ['a view'] -> []
# ['b click', 'a click'] -> [['a', 1], ['b', 1]]

def solution(records):
    l1 = []
    for r in records:
        i = r.index(' ')
        l1.append([r[0:i], r[i+1:]])

    d1 = {}
    temp = ''
    for l in l1:
        if 'click' in l:
            if d1.get(l[0]):
                d1[l[0]] += 1
            else:
                d1[l[0]] = 1

    l2 = [[k, v] for k, v in d1.items()]

    l2.sort(key=lambda x: (-x[1], x[0]))

    return l2
