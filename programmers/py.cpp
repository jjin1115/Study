//
// Created by HJ on 2020-11-09.
//https://programmers.co.kr/learn/courses/30/lessons/12916
//

#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int p = 0;
    int y = 0;
    for(auto str : s){
        if(str == 'p' or str == 'P') {
            p++;
        } else if (str =='y' or str == 'Y') {
            y++;
        }

    }

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;
    if (p != y) answer = false;
    return answer;
}