#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num;
    vector<int> n;
    cin >> num;
    n.resize(num);

    for(int i=0; i<num; i++) {
        cin >> n[i];
    }

    sort(n.begin(), n.end());
    for(int i=0; i<num; i++) {
        cout << n[i] <<" ";
    }
    return 0;
}
