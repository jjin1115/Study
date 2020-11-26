//
// Created by HJ on 2020-11-26.
// https://programmers.co.kr/learn/courses/30/lessons/12926
//

#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";

    for(auto str : s) {
        if (str == ' ') {
            answer += ' ';
        } else if (str + n > 'z') {
            answer += str + n - 26;
        } else if ( str + n > 'Z' && str <= 'Z') {
            answer += str + n - 26;
        } else {
            answer+= str + n;
        }
    }
    return answer;
}