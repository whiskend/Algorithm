#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N, B;
    cin >> N >> B;

    if (N == 0) {
        cout << 0;
        return 0;
    }

    char result[36];
    int index = 0;

    while (N > 0) {
        int digit = N % B;
        if (digit < 10)
            result[index] = digit + '0';
        else
            result[index] = digit - 10 + 'A';

        N /= B;
        index++;
    }

    for (int i = index - 1; i >= 0; i--) {
        cout << result[i];
    }

    return 0;
}