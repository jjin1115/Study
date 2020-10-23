#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

#define concatenate add
/*Write the class AddElements here*/
// class template specialization:
template <class T>
class AddElements {
    T element;
public:
    AddElements (T arg) {element=arg;}

    T add(T arg) {
        return element +arg;
    }
};
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}

int static r = start_up();

#define endl '\n';

int main () {