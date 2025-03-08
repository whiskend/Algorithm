#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string inp;
    cin >> inp;

    int arr[26] = {0};
    
    for (char c : inp) {
        arr[toupper(c) - 'A']++;
    }

    int maxCount = 0;
    char maxChar = '?';
    bool isDuplicate = false;

    for (int i = 0; i < 26; i++) {
        if (arr[i] > maxCount) {
            maxCount = arr[i];
            maxChar = 'A' + i;
            isDuplicate = false;
        } else if (arr[i] == maxCount) {
            isDuplicate = true;
        }
    }

    cout << (isDuplicate ? '?' : maxChar) << '\n';
    
    return 0;
}