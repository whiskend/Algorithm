#include <iostream>
#include <cmath>

using namespace std;

bool isPerfectNumber(int n) {
    int sum = 0;
    // n의 약수를 구함
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            sum += i;
            if (i != 1 && i != n / i) { // 자기 자신과 i=1 제외
                sum += n / i;
            }
        }
    }
    return sum == n;
}

void printDivisors(int n) {
    bool first = true;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            if (first) {
                cout << i;
                first = false;
            } else {
                cout << " + " << i;
            }
        }
    }
}

int main() {
    int n;
    
    while (true) {
        cin >> n;
        
        if (n == -1) break;
        
        if (isPerfectNumber(n)) {
            cout << n << " = ";
            printDivisors(n);
            cout << endl;
        } else {
            cout << n << " is NOT perfect." << endl;
        }
    }
    
    return 0;
}