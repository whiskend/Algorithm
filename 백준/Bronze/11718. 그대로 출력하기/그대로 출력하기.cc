#include <iostream>
#include <string>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string str;
    while(getline(cin, str)){
        cout << str << endl;
    }
    return 0;
}