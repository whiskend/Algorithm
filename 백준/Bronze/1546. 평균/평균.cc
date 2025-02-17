#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int vol;
    cin >> vol;
    
    double subject[vol], point;
    for(int i = 0; i < vol; i++){
        cin >> point;
        subject[i] = point;
    }

    double max = 0;
    for(int i = 0; i < vol; i++){
        if(subject[i] > max) max = subject[i];
    }

    for(int i = 0; i < vol; i++){
        subject[i] = (subject[i]/max)*100;
    }

    double mean = 0;
    for(int i = 0; i < vol; i++){
        mean += subject[i];
    }
    mean /= vol;

    cout << mean;
    return 0;
}