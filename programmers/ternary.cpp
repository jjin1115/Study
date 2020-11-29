//
// Created by HJ on 2020-11-29.
// https://programmers.co.kr/learn/courses/30/lessons/68935
//
#include <string>
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

int solution(int n) {
    int answer = 0;
    string temp {};
    while(n/3 >= 1) {
        temp += to_string(n%3);
        n /=3;
    }
    temp += to_string(n);
    int count = 1;
    for(auto s : temp) {

        answer += (s-'0') * pow(3, (temp.size() - count++));
    }
    return answer;
}

