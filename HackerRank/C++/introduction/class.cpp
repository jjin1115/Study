#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student {
public:

    void set_age(int age) {
        mAge = age;
    }
    void set_standard(int s) {
        mStandard = s;
    }
    void set_first_name(string firstName) {
        mFirstName = firstName;
    }
    void set_last_name(string lastName) {
        mLastName = lastName;
    }

    int get_age(){
        return mAge;
    }
    int get_standard() {
        return mStandard;
    }
    string get_first_name() {
        return mFirstName;
    }
    string get_last_name() {
        return mLastName;
    }
    string to_string() {
        return std::to_string(mAge) + "," + mFirstName + "," + mLastName + "," + std::to_string(mStandard);
    }
private:
    int mAge;
    int mStandard;
    string mFirstName;
    string mLastName;
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}