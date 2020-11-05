#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    map<string, int> person;
    for(auto c : completion){
        person[c]++;
    }

    for(auto p : participant) {
        person[p]--;
        if(person[p]<0) {
            return p;
        }
    }


}