def solution(n, times):
    lo = 1
    hi = min(times) * n
    while lo <= hi:
        p = 0
        mid = (lo+hi) // 2
        # print(f"lo:{lo}   mid:{mid}   hi:{hi}")
        for time in times:
            p += mid // time
        if p >= n:
            hi = mid - 1
        else:
            lo = mid + 1
        # print(f"p:{p}")
        # print("---")
    return lo