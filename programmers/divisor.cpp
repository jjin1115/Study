//
// Created by HJ on 2020-11-06.
// 나누어 떨어지는 배열
//https://programmers.co.kr/learn/courses/30/lessons/12910

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for(auto i : arr) {
        if(i%divisor == 0) {
            answer.push_back(i);
        }
    }
    if (answer.size() == 0){
        answer.push_back(-1);
    } else {
        sort(answer.begin(), answer.end());
    }
    return answer;
}