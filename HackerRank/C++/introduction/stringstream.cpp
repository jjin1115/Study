#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    // Complete this function
    vector<int> num;
    char ch;
    int count = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == ',') {
            count++;
        }
    }
    num.resize(count+1);
    stringstream str1(str);
    int i = 0;
    for(; i <= count ; i++) {
        str1 >> num[i] >> ch ;

    }
    return num;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}