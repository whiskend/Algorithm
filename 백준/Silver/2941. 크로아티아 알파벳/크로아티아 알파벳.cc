#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int i = 0;
    int count = 0;

    cin >> s;
    while(i < s.length()){
        if(i+1 < s.length() && s[i] == 'c' && (s[i+1] == '=' || s[i+1] == '-')){
            count++;
            i += 2;
        }
        else if(i+2 < s.length() && s[i] == 'd' && s[i+1] == 'z' && s[i+2] == '='){
            count++;
            i += 3;
        }
        else if(i+1 < s.length() && s[i] == 'd' && s[i+1] == '-'){
            count++;
            i += 2;
        }
        else if(i+1 < s.length() && s[i] == 'l' && s[i+1] == 'j'){
            count++;
            i += 2;
        }
        else if(i+1 < s.length() && s[i] == 'n' && s[i+1] == 'j'){
            count++;
            i += 2;
        }
        else if(i+1 < s.length() && s[i] == 's' && s[i+1] == '='){
            count++;
            i += 2;
        }
        else if(i+1 < s.length() && s[i] == 'z' && s[i+1] == '='){
            count++;
            i += 2;
        }
        else{
            count ++;
            i++;
        }
    }

    cout << count;
    
    return 0;
}