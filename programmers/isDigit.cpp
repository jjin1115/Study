//
// Created by HJ on 2020-11-07.
// https://programmers.co.kr/learn/courses/30/lessons/12918
//

#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = false;
    if(s.size() == 4 || s.size() == 6) {
        for(int i = 0; i < s.size(); i++){
            if(s[i] - '0' >=0  && s[i] - '0' <= 9) {
                answer = true;
            } else {
                answer = false;
                break;
            }
        }
    }

    return answer;
}