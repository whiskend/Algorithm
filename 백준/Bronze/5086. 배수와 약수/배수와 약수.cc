#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int A, B;
    while(1){
        cin >> A >> B;
        
        if (A == 0 && B == 0) break;
        if (B-A > 0 && B%A == 0) cout << "factor" << endl;
        else if (A-B > 0 && A%B == 0) cout << "multiple" << endl;
        else cout << "neither" << endl;
    }
    
    return 0;
}