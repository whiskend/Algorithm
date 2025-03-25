#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int A, B, V;
    cin >> A >> B >> V;

    int temp = 2;
    if((V-A)%(A-B) == 0) temp = 1;

    cout << (V-A)/(A-B) + temp;
    return 0;
}