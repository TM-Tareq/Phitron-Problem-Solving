#include<bits/stdc++.h>
using namespace std;


// 'this' is a pointer.It indicates the object & points to the class variable

class Student {
    public:
    int roll;
    int cls;
    double gpa;

    // constructor creation
    Student(int roll, int cls, double gpa) {
        this->roll = roll;
        // (*this).roll = roll;
        this->cls = cls;
        // (*this).cls = cls;
        this->gpa = gpa;
        // (*this).gpa = gpa;
    }
};

Student* fun() {
    Student *karim = new Student(2, 5, 5.00);
    return karim;
}

int main() {

    Student rahim(45, 5, 3.20);

    Student* obj = fun();

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << obj->roll << " " << obj->cls << " " << obj->gpa << endl;
    return 0;
}