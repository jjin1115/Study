//
// Created by HJ on 2020-11-24.
// https://programmers.co.kr/learn/courses/30/lessons/12934
//
#include <string>
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    long long res = sqrt(n);
    cout << sqrt(n) <<endl;
    if (res  == sqrt(n)) {
        answer = pow((res + 1),2);
    } else {
        answer = -1;
    }
    return answer;
}
