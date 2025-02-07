#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N = 0, v = 0;
    int arr[100] = {};

    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    cin >> v;

    int count = 0;
    for (int i = 0; i < N; i++){
        if (v == arr[i]) count++;
    }
    
    cout << count;
    
    return 0;
}