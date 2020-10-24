#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}

int static r = start_up();

#define endl '\n';


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size,  query_num, query;
    vector<int> arr;
    cin >> size ;
    //arr.resize(size);
    int temp;
    for (int i=0; i<size; i++) {
        cin >> temp;
        arr.push_back(temp);
    }
    // sort(arr.begin(), arr.end());

    cin >> query_num;
    for (int i=0; i<query_num; i++) {
        cin >> query;
        // auto it = find(arr.begin(), arr.end(), query);
        auto b = binary_search(arr.begin(), arr.end(), query);
        // int num = 0;
        // bool isFind = false;
        // for (int i =0; i< arr.size(); i++) {
        //     if(arr[i] == query) {
        //         isFind = true;
        //         num = i+1;
        //         cout << "Yes " << num <<'\n';
        //         break;
        //     } else if (arr[i] > query) {
        //         num = i+1;
        //         cout << "No " <<  num <<'\n';
        //         break;
        //     }
        // }
        auto low = lower_bound(arr.begin(), arr.end(), query);
        // if (it != arr.end()) { //(isFind) {
        if(b) {
            cout << "Yes " << (low - arr.begin() +1) << endl;// num <<'\n'; //
        } else {
            cout << "No " << (low - arr.begin() +1) << endl;//  num <<'\n'; //
        }
    }
    return 0;
}
