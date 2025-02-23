#include <iostream>
using namespace std;

int main() {
    int N;
    string number;
    
    cin >> N >> number;

    int sum = 0;
    for (char digit : number) { 
        sum += digit - '0';
    }

    cout << sum << endl;
    return 0;
}