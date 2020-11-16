//
// Created by HJ on 2020-11-16.
// https://programmers.co.kr/learn/courses/30/lessons/12921
//

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int count = 0;
    if (n ==1 ) {
        return answer;
    }
    for(int i = 2; i <= n; i++)  {
        for(int j = 2; j <i; j++) {
            if(i%j == 0) {
                count++;
            }
        }
        if( count == 0) {
            answer++;
            count = 0;
        }
    }
    return answer;
}