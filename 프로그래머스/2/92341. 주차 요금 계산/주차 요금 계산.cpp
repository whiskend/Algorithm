#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    map<string, int> use;
    for (int i = 0; i < records.size(); i++) {
        string time1, num1, command1;
        stringstream ss (records[i]);
        ss >> time1 >> num1 >> command1;
        if (command1 != "IN") continue;
        
        bool found = false;
        for (int j = i + 1; j < records.size(); j++) {
            string time2, num2, command2;
            stringstream ss (records[j]);
            ss >> time2 >> num2 >> command2;
            if (num1 == num2 && command2 == "OUT") {
                int h1 = stoi(time1.substr(0,2));
                int m1 = stoi(time1.substr(3,2));
                int h2 = stoi(time2.substr(0,2));
                int m2 = stoi(time2.substr(3,2));
                use[num1] += (h2-h1)*60 + m2 - m1;
                found = true;
                break;
            }
        }
        if (!found) {
                int h1 = stoi(time1.substr(0,2));
                int m1 = stoi(time1.substr(3,2));
                use[num1] += (23-h1)*60 + 59 - m1;
        }
    }
    for (auto p: use) {
        if (p.second > fees[0]){
            int temp = ceil((double)(p.second - fees[0]) / fees[2]);
            answer.push_back(fees[1] + temp*fees[3]);
        }
        else
            answer.push_back(fees[1]);
    }
    
    return answer;
}