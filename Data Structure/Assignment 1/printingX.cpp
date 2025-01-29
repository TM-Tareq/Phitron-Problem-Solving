#include<bits/stdc++.h>
using namespace std;
int main() {
    
    int N;
    cin >> N;

    // Loop through each row
    for (int i = 0; i < N; i++) {
        // Loop through each column
        for (int j = 0; j < N; j++) {
            if (i == j && i + j == N - 1) {
                cout << "X"; // Middle "X"
            } else if (i == j) {
                cout << "\\"; // Backslash
            } else if (i + j == N - 1) {
                cout << "/"; // Forward slash
            } else {
                cout << " "; // Spaces elsewhere
            }
        }
        cout << endl; // Move to the next row
    }

    return 0;
}