//
// Created by HJ on 2020-12-04.
//https://programmers.co.kr/learn/courses/30/lessons/12917
//

#include <string>
#include <vector>
#include <algorithm>
using namespace std;


string solution(string s) {
    string answer = "";
    sort(s.begin(), s.end());
    for(int i = s.size() -1; i>=0; i--) {
        answer+=s[i];
    }
    return answer;
}