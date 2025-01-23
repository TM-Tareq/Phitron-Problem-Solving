#include<bits/stdc++.h>
using namespace std;

// Structure to store student data
struct Student {
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
};

// Comparator function for sorting
bool compare(Student a, Student b) {
    if (a.eng_marks != b.eng_marks) // Compare by English marks (descending)
        return a.eng_marks > b.eng_marks;
    if (a.math_marks != b.math_marks) // Compare by Math marks (descending)
        return a.math_marks > b.math_marks;
    return a.id < b.id; // Compare by ID (ascending)
}

int main() {
    int n;
    cin >> n;
    Student students[1000]; // Fixed-size array for up to 1000 students

    for (int i = 0; i < n; ++i) {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
    }

    // Sort the students using the compare function
    sort(students, students + n, compare);

    // Output the sorted data
    for (int i = 0; i < n; ++i) {
        cout << students[i].name << " "
             << students[i].cls << " "
             << students[i].section << " "
             << students[i].id << " "
             << students[i].math_marks << " "
             << students[i].eng_marks << endl;
    }

    return 0;
}


