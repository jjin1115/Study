//
// Created by HJ on 2020-11-14.
// https://programmers.co.kr/learn/courses/30/lessons/12915
//

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;

    int count = 1;
    answer.push_back(strings[0]);
    int before = answer.size();
    for(int i = 1; i < strings.size(); i++) {
        for(int j = 0; j < answer.size(); j++) {
            if(answer[j][n] > strings[i][n] ) {
                answer.insert(answer.begin()+j, strings[i]);
                break;
            } else if (answer[j][n] == strings[i][n]) {
                if(answer[j] > strings[i]) {
                    answer.insert(answer.begin()+j, strings[i]);
                } else {
                    answer.push_back(strings[i]);
                }
            }
        }
        if(answer.size() <=i) {
            answer.push_back(strings[i]);
        }
    }
    return answer;
}