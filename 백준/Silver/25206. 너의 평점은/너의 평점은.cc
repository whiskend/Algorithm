#include <iostream>
#include <string>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string subN, score;
    double rating, num, sum = 0.0, total_rating = 0.0;
    int count = 0;
    while(cin >> subN >> rating >> score){
        if(score == "A+") num = 4.5;
        else if(score == "A0") num = 4.0;
        else if(score == "B+") num = 3.5;
        else if(score == "B0") num = 3.0;
        else if(score == "C+") num = 2.5;
        else if(score == "C0") num = 2.0;
        else if(score == "D+") num = 1.5;
        else if(score == "D0") num = 1.0;
        else if(score == "F") num = 0.0;
        else continue;

        sum += num * rating;
        total_rating += rating;
    }

    cout<< sum/total_rating << "\n";
    
    return 0;
}