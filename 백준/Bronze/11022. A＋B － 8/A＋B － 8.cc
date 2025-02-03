#include <iostream>
using namespace std;

int main (){
    int T = 0;
    cin >> T;

    for (int i = 0; i < T; i++){
        int A,B = 0;
        cin >> A >> B;
        cout << "Case #" << i+1 << ": " << A << " + " << B << " = "<< A+B << "\n";
    }
}