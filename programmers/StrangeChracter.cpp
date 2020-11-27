//
// Created by HJ on 2020-11-27.
// https://programmers.co.kr/learn/courses/30/lessons/12930
//

#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string s) {
    string answer = "";
    int count = 0;
    for(auto str :s) {
        if( str == ' ') {
            count = 0;
            answer += str;
            continue;
        }
        if(count%2 == 0) {
            if(str > 90) {
                answer += str - 32;
            } else {
                answer += str;
            }
        } else {
            if (str < 97) {
                answer += str+32;
            } else {
                answer += str;
            }
        }
        count++;
    }
    return answer;
}


