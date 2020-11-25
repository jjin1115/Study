//
// Created by HJ on 2020-11-25.
//https://programmers.co.kr/learn/courses/30/lessons/12935
//

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    sort(arr.begin(), arr.end());
    arr.erase(arr.begin());
    if (arr.size() == 0)
        arr.push_back(-1);
    return arr;
}