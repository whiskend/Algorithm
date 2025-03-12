#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int num1, num2;
    cin >> num1 >> num2;

    int arr[num1][num2];
    int arr2[num1][num2];
    int arr3[num1][num2];

    for(int i = 0; i < num1; i++){
        for(int j = 0; j < num2; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < num1; i++){
        for(int j = 0; j < num2; j++){
            cin >> arr2[i][j];
        }
    }
    for(int i = 0; i < num1; i++){
        for(int j = 0; j < num2; j++){
            cout << arr[i][j]+arr2[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}