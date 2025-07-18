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
        cout << "hello from " << name << endl;
    }

    void total() {
        cout << "Total marks of " << name << " " << math + english << endl;
    }
};
int main() {
    Student sakib("sakib ahmed", 23, 83, 91);
    sakib.hello();
    sakib.total();
    
    Student rakib("Rakib Ahmed", 25, 88, 91);
    rakib.hello();
    rakib.total();

    return 0;
}