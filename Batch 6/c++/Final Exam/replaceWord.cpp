#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;  // Read the number of test cases

    // Process each test case
    for (int i = 0; i < T; ++i) {
        string S, X;
        cin >> ws;  // Clear any leading whitespace
        getline(cin, S);  // Read string S
        getline(cin, X);  // Read string X

        int s_len = S.length();
        int x_len = X.length();

        // Traverse through the string S and manually check for occurrences of X
        for (int j = 0; j <= s_len - x_len; ++j) {
            bool match = true;
            // Check if substring starting at position j matches X
            for (int k = 0; k < x_len; ++k) {
                if (S[j + k] != X[k]) {
                    match = false;
                    break;
                }
            }
            
            if (match) {
                // Replace with '#' by directly modifying S
                for (int k = 0; k < x_len; ++k) {
                    S[j + k] = '#';
                }
                j += x_len - 1;  // Skip past the replaced part to avoid overlapping replacements
            }
        }

        // Output the modified string S
        cout << S << endl;
    }

    return 0;
}



