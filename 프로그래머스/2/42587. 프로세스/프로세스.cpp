#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<pair<int, int>> q;
    vector<pair<int, int>> result;
    
    for (int i = 0; i < priorities.size(); i++) {
        q.push({i, priorities[i]});
    }
    // for (int i = 0; i < priorities.size(); i++) {
    //     cout << q.front().first << " ";
    //     cout << q.front().second << endl;
    //     q.pop();
    // }
    while (!q.empty()) {
        auto [index1, prior1] = q.front();
        q.pop();
        
        bool found = false;
        queue<pair<int, int>> temp = q;
        while (!temp.empty()) {
            auto [index2, prior2] = temp.front();
            temp.pop();
            if (prior1 < prior2) {
                found = true;
                break;
            }
        }
        if (found) q.push({index1, prior1});
        else result.push_back({index1, prior1});;
    }
    for (int i = 0; i < result.size(); i++) {
        auto [index3, prior3] = result[i];
        if (location == index3) answer = i + 1;
    }
    
    return answer;
}