from collections import deque
def solution(bridge_length, weight, truck_weights):
    time = 0
    truck_weights = deque(truck_weights)
    onBridge = deque()
    remain = weight
    # [시뮬레이션] 상태: 시간. 튜플: (무게, 시간) 큐: 다리를 건너는 트럭 종료: 다리를 모두 건너면
    while onBridge or truck_weights:
        time += 1
        if onBridge and onBridge[0][1]+bridge_length == time:
                remain += onBridge[0][0]
                onBridge.popleft()
        if truck_weights and remain - truck_weights[0] >= 0:
                truckW = truck_weights.popleft()
                remain -= truckW
                onBridge.append((truckW, time))
    return time