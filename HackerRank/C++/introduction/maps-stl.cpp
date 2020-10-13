//
// Created by HJ on 2020-10-13.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map<string, int> students;
    string name;
    int query_num;
    int type;
    int marks;

    cin >> query_num;
    for(int i=0; i<query_num; i++) {
        cin >> type;
        if(type == 1){
            cin >> name >> marks;
            auto it = students.find(name);
            if (it == students.end()) {
                students.insert(make_pair(name, marks));
            } else {
                students[name] += marks;
            }
        } else if(type==2) {
            cin >> name;
            students[name] = 0;
        } else if(type==3) {
            cin >> name;
            cout << students[name] << endl;
        }

    }
    return 0;
}



