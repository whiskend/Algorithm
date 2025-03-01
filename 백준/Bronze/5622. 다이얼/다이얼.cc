#include <iostream>
#include <string>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string inp;
    cin >> inp;

    for(int i = 0; i < inp.size(); i++){
        if(inp[i] == '\0') break;
        else if(inp[i] == 'A' || inp[i] == 'B' || inp[i] == 'C') inp[i] = '2';
        else if(inp[i] == 'D' || inp[i] == 'E' || inp[i] == 'F') inp[i] = '3';
        else if(inp[i] == 'G' || inp[i] == 'H' || inp[i] == 'I') inp[i] = '4';
        else if(inp[i] == 'J' || inp[i] == 'K' || inp[i] == 'L') inp[i] = '5';
        else if(inp[i] == 'M' || inp[i] == 'N' || inp[i] == 'O') inp[i] = '6';
        else if(inp[i] == 'P' || inp[i] == 'Q' || inp[i] == 'R' || inp[i] == 'S') inp[i] = '7';
        else if(inp[i] == 'T' || inp[i] == 'U' || inp[i] == 'V') inp[i] = '8';
        else if(inp[i] == 'W' || inp[i] == 'X' || inp[i] == 'Y' || inp[i] == 'Z') inp[i] = '9';
        else continue;
    }

    int sum = 0;
    for(int i = 0; i < inp.size(); i++){
        sum += (inp[i] - '0') + 1;
    }

    cout << sum;
    return 0;
}