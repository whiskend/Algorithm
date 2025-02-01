#include <iostream>
using namespace std;

int main(){
    int count = 0;
    cin >> count;

    for(int i = 0; i < count; i++){
        int A, B = 0;
        cin >> A >> B;
        cout << A+B << endl;
    }

    return 0;
}