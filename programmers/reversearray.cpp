//
// Created by HJ on 2020-11-11.
// https://programmers.co.kr/learn/courses/30/lessons/12932
//

#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    string str = to_string(n);
    int index = str.size();
    cout << str.size();
    answer.resize(str.size());
    for(auto s : str) {
        answer[--index] = s -'0';
    }
    return answer;
}