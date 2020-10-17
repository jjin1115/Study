#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int T; cin >> T;
    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;
    while(T--) {
        double A; cin >> A;
        double B; cin >> B;
        double C; cin >> C;

        cout << setw(0x0) << nouppercase << showbase << hex << setprecision(0)<< (long long int)A << dec << endl;
        cout << setw(0xf) << right << setfill('_') <<setprecision(2) << fixed << showpos << B << endl;;
        cout << left << uppercase << noshowpos<< setprecision(0x9) << scientific << C << endl;
    }
    return 0;

}