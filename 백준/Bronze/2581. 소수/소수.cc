#include <iostream>
using namespace std;

bool isPrime(int N) {
    if (N < 2) return false;
    for (int i = 2; i * i <= N; i++) {
        if (N % i == 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int M, N;
    cin >> M >> N;

    int sum = 0;
    int minPrime = -1;

    for (int i = M; i <= N; i++) {
        if (isPrime(i)) {
            sum += i;
            if (minPrime == -1) minPrime = i;
        }
    }

    if (sum == 0) {
        cout << -1 << '\n';
    } else {
        cout << sum << '\n';
        cout << minPrime << '\n';
    }

    return 0;
}