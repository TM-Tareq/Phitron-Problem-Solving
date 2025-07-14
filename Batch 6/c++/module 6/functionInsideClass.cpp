#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
    string name;
    int roll;
    int math;
    int english;
    Student(string name, int roll, int math, int english) {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }

    void hello() {
        cout << "Hello from " << name << endl;
    }
    void marks() {
        cout << "Total marks of " << name << "=" << math + english << endl;
    }
};

int main() {
    
    Student sakib("Sakib Ahmed", 23, 20, 30);
    sakib.hello();
    sakib.marks();

    Student rakib("Rakib Ahmed", 25, 30, 50);
    rakib.hello();
    rakib.marks();

    return 0;
}