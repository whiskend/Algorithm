#include <iostream>
using namespace std;
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int inp;
    cin >> inp;

    for(int i = inp; i > 1; i--){
        for(int j = 1; j < i; j++){
            cout << ' ';
        }
        for(int j = 0; j <= inp-i; j++){
            cout << '*';
        }
        for(int j = 0; j < inp-i; j++){
            cout << '*';
        }
        cout << endl;
    }
    for(int i = 1; i <= inp; i++){
        for(int j = 1; j < i; j++){
            cout << ' ';
        }
        for(int j = 0; j <= inp-i; j++){
            cout << '*';
        }
        for(int j = 0; j < inp-i; j++){
            cout << '*';
        }
        cout << endl;
    }
    
    return 0;
}