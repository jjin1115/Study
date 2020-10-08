#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box
class Box{
// The class should have the following functions : 
public:
// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);
    Box() {l = 0; b = 0; h = 0;}
    Box(int length, int breadth, int height) {// : l(length), b(breadth), h(height){}
        l = length;
        b = breadth;
        h = height;
    }
    Box(Box& box) {
        l = box.l;
        b = box.b;
        h = box.h;
    }
// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box
    int getLength() {
        return l;
    }
    int getBreadth() {
        return b;
    }
    int getHeight() {
        return h;
    }
    long long CalculateVolume() {
        return (long long)l * b * h;
    }
//Overload operator < as specified
//bool operator<(Box& b)

    bool operator<(Box& B) {
        if(l < B.getLength()) {
            return true;
        }
        else if((b < B.getBreadth()) && (l == B.getLength())) {
            return true;
        }
        else if((h < B.getHeight()) && (l == B.getLength()) && (b == B.getBreadth())) {
            return true;
        }
        return false;
    }
//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

    friend ostream& operator<<(ostream& out, Box& B) {
        out << B.getLength() <<" " << B.getBreadth() << " " << B.getHeight();
        return out;
    }

private:
    int l;
    int b;
    int h;
};
