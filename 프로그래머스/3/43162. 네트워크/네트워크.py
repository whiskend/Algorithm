from collections import deque
def solution(n, computers):
    answer = 0
    visited = [False] * n
    que = deque()
    while not all(visited):
        i = visited.index(False)
        que.append(computers[i])
        visited[i] = True
        while que:
            temp = que.popleft()
            for i in range(0, n):
                if temp[i] == 1 and not visited[i]:
                    visited[i] = True
                    que.append(computers[i])
        answer += 1                
    return answer