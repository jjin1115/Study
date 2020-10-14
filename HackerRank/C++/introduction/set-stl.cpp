//
// Created by HJ on 2020-10-14.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size, type, num1;
    set<int> setNum;

    cin >> size;
    for(int i=0; i<size; i++) {
        cin >> type >> num1;
        if(type==1) {
            setNum.insert(num1);
        } else if(type==2) {
            setNum.erase(num1);
        } else {
            auto it = setNum.find(num1);
            if (it == setNum.end()) {
                cout << "No\n";

            } else {
                cout <<"Yes\n";
            }
        }
    }

    return 0;
}



