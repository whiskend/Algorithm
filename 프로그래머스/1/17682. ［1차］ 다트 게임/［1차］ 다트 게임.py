def solution(d):
    s = [0, 0, 0]
    i = 0
    j = -1
    while(i < len(d)):
        if d[i].isdigit():
            j += 1
            if d[i+1] == '0':
                s[j] = 10
                i += 1
            else:
                s[j] = int(d[i])
        else:
            if d[i] == 'D':
                s[j] **= 2
            if d[i] == 'T':
                s[j] **= 3
            if d[i] == '*':
                if j == 0:
                    s[j] *= 2
                else:
                    s[j] *= 2
                    s[j-1] *= 2
            if d[i] == '#':
                s[j] *= -1
        i += 1
    return sum(s)