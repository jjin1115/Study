//
// Created by HJ on 2020-11-10.
//https://programmers.co.kr/learn/courses/30/lessons/12919
//

#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    int count = 0;
    for(auto & s : seoul) {
        if (s =="Kim") break;
        else count++;
    }
    answer = "김서방은 " + to_string(count) + "에 있다";
    return answer;
}