def solution(triangle):
    answer = 0
    # 행에 + 1, 열에 + 0, 1 >> 다 더하면서 감. an = max (an-1, an-2)
    height = len(triangle)
    triangle[1][0] += triangle[0][0]
    triangle[1][1] += triangle[0][0]
    for y in range(2, height):
        size = len(triangle[y])
        for x in range(size):
            if x == 0:
                triangle[y][x] += triangle[y-1][x]
            elif 0 < x < size-1:
                triangle[y][x] += max(triangle[y-1][x], triangle[y-1][x-1])
            elif x == size-1:
                triangle[y][x] += triangle[y-1][x-1]
                
    answer = max(triangle[height-1])
    return answer

# def solution(triangle):
#     answer = 0
#     # 행에 + 1, 열에 + 0, 1 >> 다 더하면서 감. an = max (an-1, an-2)
#     height = len(triangle)
#     triangle[1][0] += triangle[0][0]
#     triangle[1][1] += triangle[0][0]
#     for y in range(2, height):
#         size = len(triangle[y])
#         triangle[y][0] += triangle[y-1][0]
#         triangle[y][size-1] += triangle[y-1][size-1-1]
#         for x in range(1, size-2):
#             triangle[y][x] += max(triangle[y-1][x], triangle[y-1][x-1])
#     answer = max(triangle[height-1])
#     return answer