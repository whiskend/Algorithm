#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int volume, trial;
    int basket[volume+1];
    cin >> volume >> trial;

    for(int i = 1; i <= volume; i++){
        basket[i] = i;
    }

    int a, b;
    for(int i = 0; i < trial; i++){
        cin >> a >> b;
        int x = basket[a], y = basket[b];
        basket[a] = y;
        basket[b] = x;
    }

    for(int i = 1; i <= volume; i++){
        cout << basket[i] << " ";
    }
    
    return 0;
}