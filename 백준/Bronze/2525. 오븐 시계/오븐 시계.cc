#include <iostream>
using namespace std;

int main(){
    int now_H,now_M,add,finish_M,finish_H = 0;
    cin >> now_H >> now_M >> add;

    finish_M = now_M + add;
    finish_H = now_H + finish_M/60;
    
    if(finish_M < 60) cout << finish_H << " " << finish_M;
    else{
        if(finish_H >= 24) cout << finish_H%24 << " " << finish_M%60;
        else cout << finish_H << " " << finish_M%60;
    }
}