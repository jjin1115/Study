//
// Created by HJ on 2020-09-14.
//

#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main() {
    // Complete the code.
    int n[2];
    for(int i=0; i<2 ; i++) {
        cin >> n[i];
    }
    // Write Your Code Here
    std::vector<string> output = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for (int i = n[0]; i <= n[1]; i++) {
        if(i>9 && i%2 == 0) {
            cout << "even" <<endl;
        } else if (i>9 && i%2!=0) {
            cout << "odd" << endl;
        } else {
            cout << output[i-1] << endl;
        }

    }
    return 0;
}

/**
#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d) {
    int result1, result2;
    if (a>b) {
        result1 = a;
    } else {
        result1 = b;
    }

    if(c>d) {
        result2 = c;
    } else {
        result2 = d;
    }

    if(result1 >result2) {
        return result1;
    } else {
        return result2;
    }
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
*/