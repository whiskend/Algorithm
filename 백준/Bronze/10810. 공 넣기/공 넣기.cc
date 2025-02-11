#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int N = 0, M = 0, arr[100] = {};

    cin >> N >> M;

    int a, b, k;
    for(int i = 1; i <= M; i++){
        cin >> a >> b >> k;
        for(int j = a; j <= b; j++){
            arr[j] = k;
        }
    }

    for(int i = 1; i <= N; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}