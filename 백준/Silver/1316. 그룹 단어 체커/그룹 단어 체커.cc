#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int vol;
    cin >> vol;

    int count = 0;
    for (int i = 0; i < vol; i++) {
        string s;
        cin >> s;

        set<char> seen;
        char last_char = '\0';

        bool is_group_word = true;
        for (char c : s) {
            if (c != last_char) {
                if (seen.count(c)) {
                    is_group_word = false;
                    break;
                }
                seen.insert(c);
            }
            last_char = c;
        }

        if (is_group_word) count++;
    }

    cout << count << "\n";
    return 0;
}