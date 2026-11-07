#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    map<string, string> users;

    for (int i = 0; i < record.size(); i++) {
        stringstream ss(record[i]);

        string command, id, name;
        ss >> command >> id >> name;

        if (command == "Enter" || command == "Change") {
            users[id] = name;
        }
    }

    for (int i = 0; i < record.size(); i++) {
        stringstream ss(record[i]);

        string command, id;
        ss >> command >> id;

        if (command == "Enter") {
            answer.push_back(users[id] + "님이 들어왔습니다.");
        }
        else if (command == "Leave") {
            answer.push_back(users[id] + "님이 나갔습니다.");
        }
    }

    return answer;
}