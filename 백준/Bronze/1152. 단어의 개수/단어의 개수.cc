#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin, s);

    int count = 0;
    bool inWord = false;

    for (char c : s) {
        if (c != ' ') {
            if (!inWord) {
                count++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }

    cout << count << '\n';
    return 0;
}