//
// Created by HJ on 2020-11-20.
// https://programmers.co.kr/learn/courses/30/lessons/12948
//

#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    for(int i = 0; i < phone_number.size() - 4 ; i++) {
        answer+='*';
    }
    answer = answer + phone_number.substr(phone_number.size()-4);
    return answer  ;
}