#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student left, Student right) {
    // return (left.marks == right.marks) ? left.roll < right.roll : left.marks > right.marks;
    if(left.marks > right.marks) {
        return true;
    } else if(left.marks < right.marks){
        return false;
    } else {
        // if(left.roll < right.roll) {
        //     return true;
        // } else {
        //     return false;
        // }
        return left.roll < right.roll;
    }

    // return left.marks < right.marks;
}
int main() {
    int n;
    cin >> n;

    Student a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    sort(a, a + n, cmp);

    Student mn;
    mn.marks = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(a[i].marks < mn.marks) {
            mn = a[i];
        }
    }
    cout << mn.name << " " << mn.roll << " " << mn.marks << endl;


    return 0;
}