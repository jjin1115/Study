#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int arrayLength, query;
    cin >> arrayLength >> query;
    vector<vector<int>> data;
    int k;
    vector<vector<int>> queryIndex ;

    data.resize(arrayLength);
    for(int i = 0; i < arrayLength; i++) {
        cin >> k;
        data[i].resize(k);
        for (int j = 0; j < k; j++) {
            cin >> data[i][j];
        }
    }

    queryIndex.resize(query);

    for(int i = 0; i < query; i++){
        queryIndex[i].resize(2);
        cin >> queryIndex[i][0] >> queryIndex[i][1];
    }

    for(int i = 0; i< query; i++) {
        int num1 = queryIndex[i][0];
        int num2 = queryIndex[i][1];
        cout << data[num1][num2] <<endl;
    }
    return 0;
}