//
// Created by HJ on 2020-10-15.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size,  query_num, query;
    vector<int> arr;
    cin >> size ;
    arr.resize(size);
    for (int i=0; i<size; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    cin >> query_num;
    for (int i=0; i<query_num; i++) {
        cin >> query;
        auto it = find(arr.begin(), arr.end(), query);
        auto low = lower_bound(arr.begin(), arr.end(), query);
        if (it != arr.end()) {
            cout << "Yes " << (low - arr.begin() +1) << endl;
        } else {
            cout << "No " << (low - arr.begin() +1) << endl;
        }
    }
    return 0;
}
