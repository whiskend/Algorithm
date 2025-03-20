#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int layer = 1;
    int room_count = 1;

    while (room_count < N) {
        room_count += 6 * layer;
        layer++;
    }

    cout << layer << endl;
    return 0;
}