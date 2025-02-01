#include <iostream>
using namespace std;

int main(){
    int count = 0;
    cin >> count;

    int ans = 0;
    for (int i = 1; i<=count; i++){
        ans += i;
    }
    
    cout << ans;

    return 0;
}