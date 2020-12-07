//
// Created by HJ on 2020-12-06.
//https://programmers.co.kr/learn/courses/30/lessons/12899#
//
#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(int n) {
    string answer = "";
    vector<string> converter {"4","1","2"};
    string temp = "";
    bool iscal = true;

    // if(n <=3) {
    //     iscal = false;
    //     temp += to_string(n);
    // }
    while (n>3) {
        cout << "n =  " << n <<endl;
        temp += to_string(n%3);
        n = n/3;

    }
    temp += to_string(n-1);

    for(int i = temp.size()-1 ; i>= 0; i--) {
        int idx = temp[i]-'0';
        answer += converter[idx];
        cout << "i = " << temp[i] -'0'  << idx << " answer " <<answer <<endl;
    }
    return answer;
}