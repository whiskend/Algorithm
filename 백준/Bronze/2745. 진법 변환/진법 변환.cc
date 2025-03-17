#include <iostream>
#include <string>
using namespace std;

int main() {
    string N;
    int B;
    cin >> N >> B;

    long long result = 0;
    for (char ch : N) {
        int digit;
        if ('0' <= ch && ch <= '9') {
            digit = ch - '0';
        } else {
            digit = ch - 'A' + 10;
        }
        result = result * B + digit;
    }

    cout << result << endl;
    
    return 0;
}