#include <iostream>
using namespace std;

int main(){
    int year = 0;
    cin >> year;
    if (year % 400 == 0) cout << 1;
    else if (year % 100 == 0) cout << 0;
    else if (year % 4 == 0) cout << 1;
    else cout << 0;
}