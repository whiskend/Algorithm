#include <string>
#include <vector>

using namespace std;

int cnt = 0;
string vowels = "AEIOU";
int answer = 0;

void dfs (string curr, string target) {
    if (curr.size() > 5) return;
    if (curr != "") {
        cnt++;
    }
    if (curr == target) {
        answer = cnt;
        return;
    }
    for (char c: vowels) {
        dfs(curr + c, target);
    }
}

int solution(string word) {
    dfs("", word);
    return answer;
}