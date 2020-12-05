//
// Created by HJ on 2020-12-05.
//https://programmers.co.kr/learn/courses/30/lessons/68644
//
#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    // sort(numbers.begin(), numbers.end());
    // numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
    for(int i = 0; i < numbers.size(); i++ ) {
        for(int j = i+1; j < numbers.size(); j++) {
            answer.push_back(numbers[i]+numbers[j]);
        }
    }
    sort(answer.begin(), answer.end());
    answer.erase(unique(answer.begin(), answer.end()), answer.end());
    return answer;
}