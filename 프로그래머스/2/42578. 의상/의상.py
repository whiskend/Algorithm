def solution(clothes):
    answer = 1
    dic = {}
    for _ , key in clothes:\
        dic[key] = dic.get(key, 0) + 1
    for value in dic.values():
        answer *= value + 1
    return answer - 1