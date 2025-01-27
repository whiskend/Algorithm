#include <iostream>
using namespace std;

int main(){
    int num1;
    int num2, num2_100, num2_10, num2_1;
    
    cin >> num1 >> num2;
    
    num2_100 = num2/100;
    num2_10 = (num2-num2_100*100)/10;
    num2_1 = (num2-num2_100*100-num2_10*10);
    
    cout << num1*num2_1 << endl;
    cout << num1*num2_10 << endl;
    cout << num1*num2_100 << endl;
    cout << num1*num2 << endl;
    
    return 0;
}