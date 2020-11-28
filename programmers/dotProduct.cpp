//
// Created by HJ on 2020-11-28.
// https://programmers.co.kr/learn/courses/30/lessons/70128
//

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 1234567890;
    long long int temp=0;
    for (int i = 0; i < a.size(); i++) {
        temp += a[i]* b[i];
    }
    answer = temp;
    return answer;
}