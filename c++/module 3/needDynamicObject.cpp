#include<bits/stdc++.h>
using namespace std;

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
    // Student karim(2, 5, 5.00);
    Student* karim = new Student(2, 5, 5.00);

    Student * p = karim;

    return p;
}

int main() {

    Student *p = fun();

    Student* karim = new Student(10, 5, 3.56);

    cout << karim->roll << " " << karim->cls << " " << karim->gpa << endl;
    cout << p->roll << " " << p->cls << " " << p->gpa << endl;
    return 0;
}