#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int x,y,w,h;
    cin >> x >> y >> w >> h;

    int arr[4] = {x, y, w-x, h-y};
    int min = arr[0];
    
    for(int i = 0; i < 4; i++){
        if(min > arr[i]) min = arr[i];
    }

    cout << min;
    
    return 0;
}