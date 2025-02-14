#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int student[31] = {};

    int submit = 0;
    while(cin >> submit){
        student[submit] = 1;
    }

    for (int i = 1; i < 31; i++){
        if(student[i] != 1) cout << i << endl;
    }

    return 0;
}