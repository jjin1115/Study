//
// Created by HJ on 2020-11-19.
// https://programmers.co.kr/learn/courses/30/lessons/12943
//

#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long int num2= num;
    while(answer < 499 && num2 != 1) {
        if(num2%2 == 0) {
            num2 = num2/2;
        } else {
            num2 = num2 * 3 + 1;
        }
        answer++;
    }
    if(answer >= 499) answer = -1;
    return answer;
}