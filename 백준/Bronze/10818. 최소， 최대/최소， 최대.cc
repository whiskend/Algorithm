#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N = 0;
    cin >> N;
    
    int arr[N] = {};
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    int min = 1000000, max = -1000000;
    for(int i = 0; i < N; i++){
        if(arr[i] < min) min = arr[i];
        if(arr[i] > max) max = arr[i];
    }
    cout << min << " " << max;
}