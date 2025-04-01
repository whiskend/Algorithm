#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int N;
    cin >> N;

    int num, count = 0;
    
    for(int i = 0; i < N; i++){
        cin >> num;
        bool isPrime = true;
        if(num == 1) continue;
        for(int j = 2; j < num; j++){
            if(num % j == 0) isPrime = false;
        }
        
        if(isPrime == true) count++;
    }

    cout << count;
    return 0;
}