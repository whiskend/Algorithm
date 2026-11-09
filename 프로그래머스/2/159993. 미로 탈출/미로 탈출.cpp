#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<string> maps) {
    int answer = 0;
    int height = maps.size();
    int width = maps[0].size();
    queue<tuple<int, int, int>> q;
    vector<vector<bool>> visited(height, vector<bool>(width, false));
    int dx[4] = {0, 0, 1, -1};
    int dy[4] = {1, -1, 0, 0};
    
    
    bool found = false;
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            if (maps[i][j] == 'S') {
                visited[i][j] = true;
                q.push({j, i, 0});
                found = true;
                break;
            }
        }
        if (found) break;
    }
    
    
    
    
    bool lever = false;
    int nx, ny, d, temp;
    while(!q.empty() && !lever){
        auto [x, y, d] = q.front();
        q.pop();
        for (int i = 0; i < 4; i++){
            ny = y + dy[i];
            nx = x + dx[i];
            if (nx < 0 || ny < 0 || nx >= width || ny >= height) continue;
            if (visited[ny][nx] || maps[ny][nx] == 'X') continue;
            if (maps[ny][nx] == 'L') {
                lever = true;
                temp = d + 1;
                break;
            }
            visited[ny][nx] = true;
            q.push({nx, ny, d + 1});
        }
    }
    if (!lever) return -1;
    
    
    visited.assign(height, vector<bool>(width, false));
    q = queue<tuple<int, int, int>>();
    q.push({nx, ny, temp});
    visited[ny][nx] = true;
    bool end = false;
    while(!q.empty() && !end){
        auto [x, y, d] = q.front();
        q.pop();
        for (int i = 0; i < 4; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (nx < 0 || ny < 0 || nx >= width || ny >= height) continue;
            if (visited[ny][nx] || maps[ny][nx] == 'X') continue;
            if (maps[ny][nx] == 'E') {
                end = true;
                d++;
                break;
            }
            visited[ny][nx] = true;
            q.push({nx, ny, d + 1});
        }
        if (end) return d;
    }
    
    
    
    return -1;
}