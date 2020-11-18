//
// Created by HJ on 2020-11-18.
// https://programmers.co.kr/learn/courses/30/lessons/12947
//

#include <string>
#include <vector>
#include <iostream>
using namespace std;

bool solution(int x) {
    bool answer = false;
    string str = to_string(x);
    int sum = 0;
    for(int i=0; i<str.size(); i++) {
        sum += str[i] -'0';
    }
    if(x%sum == 0) answer = true;
    return answer;
}