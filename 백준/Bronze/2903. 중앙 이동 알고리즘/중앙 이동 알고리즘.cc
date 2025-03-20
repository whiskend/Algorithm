#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int inp;
    cin >> inp;

    int num = 2;
    for(int i = 0; i < inp; i++){
        num = 2 * num - 1;        
    }

    int result;
    result = num * num;

    cout << result;
    
    return 0;
}