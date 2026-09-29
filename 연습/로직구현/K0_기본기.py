# K0 · 기본기 진단
# 자체 연습문제.
#
# 제한 시간: 20분. 아래 네 함수를 완성하세요.
# 공통: 입력은 항상 조건에 맞으며 입력 리스트를 수정하면 안 됩니다.
#
# 1. count_nonnegative(nums)
# 정수 리스트에서 0 이상인 원소의 개수를 반환하세요.
# 길이: 0~100,000.
# 예: [-2, 0, 4] -> 2 / [] -> 0 / [-1, -1] -> 0
def count_nonnegative(nums):
    l1 = []
    for n in nums:
        if n >= 0:
            l1.append(n)
    return len(l1)

# 2. unique_first(values)
# 문자열의 중복을 제거하되 처음 나온 순서대로 반환하세요.
# 길이: 0~100,000. 문자열 길이: 1~20.
# 예: ['b', 'a', 'b', 'c'] -> ['b', 'a', 'c']
def unique_first(values):
    val2 = []
    for i in values:
        if i not in val2:
            val2.append(i)
    return val2

# 3. rank_scores(rows)
# [이름, 점수] 목록을 점수 내림차순, 동률이면 이름 사전순으로 정렬해 반환하세요.
# 이름은 중복 없는 소문자 문자열. 행 수: 0~100,000.
# 예: [['bo', 2], ['al', 2], ['cy', 3]]
#  -> [['cy', 3], ['al', 2], ['bo', 2]]
def rank_scores(rows):
    rows2 = rows.copy()
    rows2.sort(key=lambda x:(-x[1], x[0]))
    return rows2


# 4. word_counts(words)
# 단어별 등장 횟수를 딕셔너리로 반환하세요.
# 길이: 0~100,000. 단어 길이: 1~20.
# 예: ['x', 'y', 'x'] -> {'x': 2, 'y': 1}
def word_counts(words):
    dWords = {}
    for w in words:
        if dWords.get(w):
            dWords[w] += 1
        else:
            dWords[w] = 1
    return dWords
