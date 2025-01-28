#include <iostream>
using namespace std;

int main() {
    int sco;
    cin >> sco;

    if (sco >= 90) cout << "A";
    else if (sco >= 80) cout << "B";
    else if (sco >= 70) cout << "C";
    else if (sco >= 60) cout << "D";
    else cout << "F";

    return 0;
}