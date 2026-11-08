#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <set>

using namespace std;

int solution(string numbers) {
    int answer = 0;
    int size = numbers.size();
    
    sort(numbers.begin(), numbers.end());
    set<int> allNum;
    do {
        for (int i = 1; i <= size; i++) {
            allNum.insert(stoi(numbers.substr(0,i)));
        }
    } while(next_permutation(numbers.begin(), numbers.end()));
    
    for (int n: allNum){
        if (n < 2) continue;
        bool isPrime = true;
        for (int i = 2; i*i <= n; i++) {
            if (n % i == 0) isPrime = false;
        }
        if (isPrime) answer += 1;
    }
    return answer;
}