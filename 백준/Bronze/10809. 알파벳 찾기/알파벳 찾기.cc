#include <iostream>
#include <string>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    string inp;
    cin >> inp;

    int arr[32];
    for(int i = 0; i < 32; i++) arr[i] = -1;
    
    for(int i = 97; i <= 122; i++){
        for (int j = 0; j < inp.size(); j++){
            if( int(inp[j]) == i ) {
                arr[i-97] = j;
                break;
            }
        }
    }

    for(int i = 0; i < 26; i++) cout << arr[i] << " ";
    
    return 0;
}