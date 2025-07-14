#include<bits/stdc++.h>
using namespace std;


// constructor creation role-
/*
3 rules have:
1. It would be a function
2. Must create inside the class & the name would be the same as class name
3. do not have any return type
*/


class Student {
    public:
    int roll;
    int cls;
    double gpa;

    // constructor creation
    Student(int r, int c, double g) {
        roll = r;
        cls = c;
        gpa = g;
    }

};

int main() {

    Student rahim(45, 5, 3.20);
    // rahim.roll = 45;
    // rahim.cls = 5;
    // rahim.gpa = 3.20;

    Student karim(2, 5, 5.00);
    // karim.roll = 2;
    // karim.cls = 5;
    // karim.gpa = 5.00;

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
    return 0;
}