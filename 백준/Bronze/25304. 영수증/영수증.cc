#include <iostream>
using namespace std;

int main(){
    int sum, number = 0;
    cin >> sum >> number;

    int ans = 0;
    for (int i = 0; i< number; i++){
        int price, count = 0;
        cin >> price >> count;
        
        ans += price * count;
    }
    
    if(ans == sum) cout << "Yes";
    else cout << "No";

    return 0;
}