#include <iostream>
#include <string>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    string S;
    int i;
    cin >> S >> i;
    cout << S[i-1];

    return 0;
}