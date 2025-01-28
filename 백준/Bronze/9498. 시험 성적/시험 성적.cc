#include <iostream>
using namespace std;

int main(){
    int sco = 0;
    
    cin >> sco;
    
    if(90 <= sco && sco <= 100){
        cout<< "A" <<endl;
    }
    else if(80 <= sco && sco <= 89){
        cout<< "B" <<endl;
    }
    else if(70 <= sco && sco <= 79){
        cout<< "C" <<endl;
    }
    else if(60 <= sco && sco <= 69){
        cout<< "D" <<endl;
    }
    else{
        cout<< "F" << endl;
    }
    
    return 0;
}