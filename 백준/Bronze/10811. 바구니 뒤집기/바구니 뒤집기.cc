#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N, M;
    cin >> N >> M;

    vector<int> basket(N);
    for (int i = 0; i < N; i++) {
        basket[i] = i + 1;
    }

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        reverse(basket.begin() + (a - 1), basket.begin() + b);
    }

    for (int i = 0; i < N; i++) {
        cout << basket[i] << " ";
    }

    return 0;
}