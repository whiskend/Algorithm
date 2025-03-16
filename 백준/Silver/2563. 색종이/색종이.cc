#include <iostream>
using namespace std;

int main() {
    int paper[100][100] = {0};

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;

        for (int dx = x; dx < x + 10; dx++) {
            for (int dy = y; dy < y + 10; dy++) {
                paper[dx][dy] = 1;
            }
        }
    }

    int area = 0;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (paper[i][j] == 1) {
                area++;
            }
        }
    }

    cout << area << endl;

    return 0;
}