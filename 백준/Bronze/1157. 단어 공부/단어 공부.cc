#include <iostream>
#include <string>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string inp;
    cin >> inp;

    int alphabet[26] = {};
    for(char c: inp){
        alphabet[toupper(c) - 'A']++;
    }

    int max = 0;
    char maxAlphabet = 'A';
    bool duplication = false;
    for(int i = 0; i < 26; i++){
        if(max < alphabet[i]){
            max = alphabet[i];
            maxAlphabet = i + 'A';
            duplication = false;
        }
        else if (max == alphabet[i]){
            duplication = true;
        }
    }

    cout << (duplication ? '?' : maxAlphabet);
    
    return 0;
}