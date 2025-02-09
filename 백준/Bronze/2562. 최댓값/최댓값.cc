#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int arr[9] = {};
    for(int i = 0; i < 9; i++){
        cin >> arr[i];
    }

    int max = 0;
    for(int i = 0; i < 9; i++){
        if(max < arr[i]) max = arr[i];
    }

    int count = 0;
    for(int i = 0; i < 9; i++){
        if(arr[i] == max) count = i+1;
    }

    cout << max << endl << count;

    return 0;
}