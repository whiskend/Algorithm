#include <iostream>
#include <string>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    string inp;
    cin >> inp;
    int mid = inp.size()/2 + 1;
    int vol = inp.size();

    int result = 1;
    for(int i = 0; i < mid; i++){
        if(inp[i] != inp[vol-1-i]){
            result = 0;
            break;
        }
    }

    cout << result << endl;
    
    return 0;
}