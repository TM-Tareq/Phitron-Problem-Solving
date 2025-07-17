#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    char name[100];
    int id;
    char section[10];
    int total_marks;
};

int main() {
    int t;
    cin >> t;

    while(t--) {

        Student students[3];

        for(int i = 0; i < 3; i++) {
            cin >> students[i].id >> students[i].name >> students[i].section >> students[i].total_marks;
        
        }

        int highest_marks = 0;

        Student st = students[0];

        for(int i = 0; i < 3; i++) {
            if(students[i].total_marks == highest_marks && students[i].id < st.id) {
                st = students[i];
            }
            if(students[i].total_marks > highest_marks) {
                highest_marks = students[i].total_marks;
                st = students[i];
            }
        }

        cout << st.id << " " << st.name << " " << st.section << " " << st.total_marks << endl;

    }

    return 0;
}