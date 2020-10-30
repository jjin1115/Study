#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> solution(vector<vector<int> > v) {
    vector<int> ans;

    map<int, int> x;
    map<int, int> y;

    for (int i = 0; i < v.size(); i++){
        auto fromX = v[i][0];
        auto temp = x.find(fromX);
        if (temp != x.end()) {
            x.erase(fromX);
        } else {
            x[fromX] = 1;
        }
        auto fromY = v[i][1];
        temp = y.find(fromY);
        if (temp != y.end()) {
            y.erase(fromY);
        } else {
            y[fromY] = 1;
        }
    }
    ans.push_back(x.begin() -> first);
    ans.push_back(y.begin() -> first);
    return ans;
}