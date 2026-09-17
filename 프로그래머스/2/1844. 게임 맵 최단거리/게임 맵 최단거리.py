from collections import deque
def solution(maps):
    distance = 1
    row = len(maps)
    col = len(maps[0])
    visited = [False] * (row * col)
    queue = deque()
    queue.append((0, 0, distance))
    visited[0] = True
    dy = [-1, 1, 0, 0]
    dx = [0, 0, -1, 1]
    
    while queue:
        y, x, distance = queue.popleft()
        if y == row-1 and x == col-1:
            return distance
            
        for i in range(4):
            ny = y + dy[i]
            nx = x + dx[i]
            
            if 0<=ny<row and 0<=nx<col and maps[ny][nx] and not visited[ny*col + nx]:
                visited[ny*col + nx] = True
                queue.append((ny, nx, distance+1))
        
    return -1