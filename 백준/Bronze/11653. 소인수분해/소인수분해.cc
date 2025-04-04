#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    for(int i = 2; i <= N; i++){
        while(N%i == 0){
        cout << i << endl;
        N /= i;
        }
    }
    
    return 0;
}