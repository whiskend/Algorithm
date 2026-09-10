from collections import deque
def solution(people, limit):
    count = 0
    people.sort()
    people = deque(people)
    while people:
        if len(people) == 1:
            people.pop()
            count += 1
        elif people[0] + people[len(people)-1] <= limit:
            people.popleft()
            people.pop()
            count += 1
        else:
            people.pop()
            count += 1
    return count