#include <iostream>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);    
    int vol; string data;
    
    cin >> vol;
    for(int i = 0; i < vol; i++){
        cin >> data;
        cout << data.front() << data.back() << endl;
    }
    
    return 0;
}