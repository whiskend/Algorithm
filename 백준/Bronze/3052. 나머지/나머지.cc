#include <iostream>
#include <set>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    set<int> remain;
    for(int i = 0; i < 10; i++){
        int number;
        cin >> number;
        remain.insert(number % 42);
    }

    cout << remain.size();

    return 0;
}