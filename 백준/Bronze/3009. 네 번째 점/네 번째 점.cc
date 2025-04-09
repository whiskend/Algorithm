#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int x[3], y[3];
    
    // 세 점의 좌표 입력 받기
    for (int i = 0; i < 3; i++) {
        cin >> x[i] >> y[i];
    }

    // x와 y 좌표 각각에 대한 값의 등장 횟수를 세는 맵
    unordered_map<int, int> x_map, y_map;

    for (int i = 0; i < 3; i++) {
        x_map[x[i]]++;
        y_map[y[i]]++;
    }

    // 네 번째 점의 x와 y 좌표를 찾기
    int x_result, y_result;
    
    // x 값 중에서 한 번만 등장한 값 찾기
    for (auto& entry : x_map) {
        if (entry.second == 1) {
            x_result = entry.first;
            break;
        }
    }
    
    // y 값 중에서 한 번만 등장한 값 찾기
    for (auto& entry : y_map) {
        if (entry.second == 1) {
            y_result = entry.first;
            break;
        }
    }

    // 네 번째 점 출력
    cout << x_result << " " << y_result << endl;

    return 0;
}