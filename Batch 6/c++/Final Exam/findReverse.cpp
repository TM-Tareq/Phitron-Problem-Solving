#include<bits/stdc++.h>
using namespace std;

// Structure to store student data
struct Student {
    string name;
    int cls;
    char section;
    int id;
};

int main() {
    int n;
    cin >> n;
    Student students[100]; // Fixed-size array for up to 100 students

    for (int i = 0; i < n; ++i) {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id;
    }

    // Reverse the sections
    for (int i = 0; i < n / 2; ++i) {
        swap(students[i].section, students[n - i - 1].section);
    }

    // Output the updated data
    for (int i = 0; i < n; ++i) {
        cout << students[i].name << " "
             << students[i].cls << " "
             << students[i].section << " "
             << students[i].id << endl;
    }

    return 0;
}
