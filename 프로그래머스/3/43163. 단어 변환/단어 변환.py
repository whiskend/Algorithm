from collections import deque
def solution(begin, target, words):
    visited = [False] * len(words)
    q = deque()
    q.append((begin, 0))
    depth_list = []
    suc = False
    # begin이 words에 들어있는 경우도 고려해야 하지 않을까?
    while q:
        curr, depth = q.popleft()
        if curr == target:
            suc = True
            depth_list.append(depth)
        for i in range(len(words)):
            if not visited[i]:
                dar = 0
                for j in range(len(curr)):
                    if curr[j] != words[i][j]:
                        dar += 1
                if dar == 1:
                    visited[i] = True
                    q.append((words[i], depth + 1))
    if (suc):
        return min(depth_list)
    else:
        return 0