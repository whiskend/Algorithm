#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    map<string, string> user;
    string command, uid, name;
    
    for (int i = 0; i < record.size(); i++) {
        stringstream ss (record[i]);    
        ss >> command >> uid >> name;
        if (command == "Enter" || command == "Change") {
            user[uid] = name;
        }
    }
    
    for (int i = 0; i < record.size(); i++) {
        stringstream ss (record[i]);
        ss >> command >> uid;
        if (command == "Enter") {
            answer.push_back(user[uid] + "님이 들어왔습니다.");
        }
        else if (command == "Leave") {
            answer.push_back(user[uid] + "님이 나갔습니다.");
        }
    }
    return answer;
}