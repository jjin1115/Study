#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */
    int hour = stoi(s.substr(0,2));
    string apm = s.substr(8,2);

    if (apm == "AM") {
        if (hour == 12 ){
            return "00"+ s.substr(2,6);
        }
        return s.substr(0,8);
    } else {
        if (hour == 12) {
            return s.substr(0,8);
        }
        return to_string(hour+12) + s.substr(2,6);
    }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
