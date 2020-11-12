//
// Created by HJ on 2020-11-12.
//https://programmers.co.kr/learn/courses/30/lessons/12906
//

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    answer.push_back(arr[0]);
    int size;
    for(int i=1;i<arr.size(); i++){
        size = answer.size();
        if(answer[size-1]==arr[i]) {
            continue;
        } else {
            answer.push_back(arr[i]);
        }

    }
    cout << "Hello Cpp" << endl;

    return answer;
}
