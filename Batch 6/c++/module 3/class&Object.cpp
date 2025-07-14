#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    char name[100];
    int roll;
    double gpa;
};
int main() {

    Student a;
    Student b,c;
    // cin.getline(b.name, 100);
    // cin.ignore(); // getChar();
    // cin.getline(c.name, 100);
    cin >> b.name >> b.roll >> b.gpa;
    cin >> c.name >> c.roll >> c.gpa;
    a.roll = 10;
    a.gpa = 3.57;
    char temp[100] = "sakib";
    strcpy(a.name, temp);

    cout << a.name << " " << a.roll << " " << a.gpa <<  endl;
    cout << b.name << " " << b.roll << " " << b.gpa <<  endl;
    cout << c.name << " " << c.roll << " " << c.gpa <<  endl;
    return 0;
}