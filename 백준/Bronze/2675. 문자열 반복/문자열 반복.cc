#include <iostream>
#include <string>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int vol, repeat;
    string A;
    cin >> vol;

    for(int i = 0; i < vol; i++){
        cin >> repeat >> A;
        for(int j = 0; j < A.size(); j++){
            for(int k = 0; k < repeat; k++){
                cout << A[j];
            }
        }
        cout << "\n";
    }
    
    return 0;
}