from itertools import permutations
def solution(k, dungeons):
    counts = []
    ad = list(permutations(dungeons))
    origin = k
    
    while ad:
        count = 0
        k = origin
        dun = ad.pop()
        for d in dun:
            if k >= d[0] and k - d[1] >= 0:
                k -= d[1]
                count += 1
            else:
                continue
        counts.append(count)
    
    return max(counts)