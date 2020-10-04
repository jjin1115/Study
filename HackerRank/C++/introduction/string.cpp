#include <iostream>
#include <string>
using namespace std;

int main() {
    // Complete the program
    string a, b;
    cin >> a >> b;
    cout << a.size() << " " << b.size() <<endl;

    cout << a + b << endl;
    string a2, b2;
    a2 = a;
    a2[0] = b[0];

    b2 = b;
    b2[0] = a[0];
    cout << a2 << " " << b2;
    return 0;
}