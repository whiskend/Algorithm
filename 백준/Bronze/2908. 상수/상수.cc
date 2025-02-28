#include <iostream>
#include <string>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    string A, B;
    cin >> A >> B;
    int revA = stoi(string(A.rbegin(), A.rend()));
    int revB = stoi(string(B.rbegin(), B.rend()));
    cout << max(revA, revB) << endl;

    return 0;
}