def solution(numbers):
    answer = []
    # numbers 순회 > 두 개씩 돌면서 리스트 만듬 > set 씌움 > sorted로 정렬된 리스트 반환
    size = len(numbers)
    sumset = set()
    for i in range(0, size):
        for j in range(i+1, size):
            sumset.add(numbers[i]+numbers[j])
    answer = sorted(sumset)
    return answer