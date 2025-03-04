#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int arr[6] = {1, 1, 2, 2, 2, 8}, inp = 0;
    
    for(int i = 0; i < 6; i++){
        cin >> inp;
        cout << arr[i] - inp << " ";
    }
    
    return 0;
}