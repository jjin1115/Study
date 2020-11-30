//
// Created by HJ on 2020-11-30.
// https://programmers.co.kr/learn/courses/30/lessons/12901
//
#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(int a, int b) {
    string answer = "";
    vector<int> month {31,29,31,30,31,30,31,31,30,31,30,31};
    vector<string> day {"FRI","SAT","SUN", "MON", "TUE", "WED", "THU"};
    int count =0;

    for(int i = 0; i < a-1; i++) {
        count+= month[i];
    }
    count += b;
    if(count%7 == 0) {
        return "THU";
    }

    return day[(count%7 -1)];
}
