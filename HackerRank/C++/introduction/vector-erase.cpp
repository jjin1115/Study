//
// Created by HJ on 2020-10-12.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size;
    vector<int> arr;
    int num1, num2, num3;

    cin >> size;
    arr.resize(size);
    for(int i=0; i<size; i++) {
        cin >> arr[i];
    }
    cin >> num1;
    arr.erase(arr.begin()+num1 -1);

    cin >> num2 >>num3;

    arr.erase(arr.begin()+num2-1, arr.begin()+num3-1);

    cout << arr.size() << endl;
    for(int i=0; i<arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
