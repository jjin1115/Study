//
// Created by HJ on 2020-10-19.
//

#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

void printKMax(int arr[], int n, int k){
    //Write your code here.
    deque<int> de(arr, arr+n);

    for(int i=0; i<=n-k;i++) {
        cout << *max_element(begin(de) +i , begin(de)+i+k) << " ";

    }
    cout <<endl;
}

int main(){

    int t;
    cin >> t;
    while(t>0) {
        int n,k;
        cin >> n >> k;
        int i;
        int arr[n];
        for(i=0;i<n;i++)
            cin >> arr[i];
        printKMax(arr, n, k);
        t--;
    }
    return 0;
}
