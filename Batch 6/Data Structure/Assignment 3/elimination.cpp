#include <bits/stdc++.h>
using namespace std;

bool isEliminated(string s) {
    stack<char> st;

    for (char ch : s) {
        if (ch == '1' && !st.empty() && st.top() == '0') {
            // Eliminate 1 and the adjacent 0 from the stack
            st.pop();
        } else {
            // Otherwise, push the current character onto the stack
            st.push(ch);
        }
    }

    // If stack is empty after all eliminations, return true (all eliminations completed)
    return st.empty();
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        cout << (isEliminated(s) ? "YES" : "NO") << endl;
    }

    return 0;
}