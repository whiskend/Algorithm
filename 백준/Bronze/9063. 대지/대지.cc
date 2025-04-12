#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int N;
    cin >> N;

    int x, y;
    int min_x, min_y, max_x, max_y;
    for(int i = 0; i < N; i++){
        cin >> x >> y;
        if(i == 0){
            min_x = x;
            min_y = y;
            max_x = x;
            max_y = y;
        }
        if(min_x > x) min_x = x;
        if(max_x < x) max_x = x;
        if(min_y > y) min_y = y;
        if(max_y < y) max_y = y;
    }

    cout << (max_x - min_x) * (max_y - min_y);
    return 0;
}