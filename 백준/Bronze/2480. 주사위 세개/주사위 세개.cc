#include <iostream>
using namespace std;

int main(){
    int num1, num2, num3 = 0;
    cin >> num1 >> num2 >> num3;
    
    if(num1 == num2 && num2 == num3) cout << 10000+num1*1000;
    else if(num1 == num2) cout << 1000+num1*100;
    else if(num1 == num3) cout << 1000+num1*100;
    else if(num2 == num3) cout << 1000+num2*100;
    else{
        int max = num1;
        if(max<num2) max = num2;
        if(max<num3) max = num3;
        cout << max*100;
    }
    
    return 0;
}