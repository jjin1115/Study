//
// Created by HJ on 2020-11-14.
// https://programmers.co.kr/learn/courses/30/lessons/12915
//
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int sIndex;

bool compare(string& str1, string& str2){
    if (str1[sIndex] != str2[sIndex]) {
        return str1[sIndex] < str2[sIndex];
    } else {
        return str1 < str2;
    }
}
vector<string> solution(vector<string> strings, int n) {
    sIndex = n;
    sort(strings.begin(), strings.end(), compare);
    return strings;
}