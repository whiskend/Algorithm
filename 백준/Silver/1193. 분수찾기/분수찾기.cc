#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;

    int line = 1;
    while (X > line * (line + 1) / 2) {
        line++;
    }

    int prev_total = (line - 1) * line / 2;
    int pos = X - prev_total;

    int numerator, denominator;

    if (line % 2 == 0) {
        numerator = pos;
        denominator = line - pos + 1;
    } else {
        numerator = line - pos + 1;
        denominator = pos;
    }

    cout << numerator << "/" << denominator << endl;
    return 0;
}