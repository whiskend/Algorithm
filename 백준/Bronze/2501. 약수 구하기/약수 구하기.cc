#include <iostream>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;

    int j = 1;
    int arr[N] = {};
    for(int i = 1; i <= N; i++){
        if(N % i == 0){
            arr[j] = i;;
            j++;
        }
    }

    cout << arr[K];
    return 0;
}