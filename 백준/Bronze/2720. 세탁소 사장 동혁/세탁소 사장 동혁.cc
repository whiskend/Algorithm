#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int T, inp;
    cin >> T;

    int unit[4] = {25, 10, 5, 1};
    for(int i = 0; i < T; i++){
        cin >> inp;
        for(int j = 0; j < 4; j++){
            cout << inp/unit[j] << " ";
            inp %= unit[j];
        }
        cout << endl;
    }
    
    return 0;
}