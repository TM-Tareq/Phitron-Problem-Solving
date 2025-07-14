#include <bits/stdc++.h>
using namespace std;

void checkStackQueue(int n, int m, vector<int>& stackValues, vector<int>& queueValues) {
    stack<int> s;
    queue<int> q;

    for (int i = 0; i < n; i++) {
        s.push(stackValues[i]);
    }

    for (int i = 0; i < m; i++) {
        q.push(queueValues[i]);
    }
    while (!s.empty() && !q.empty()) {
        if (s.top() != q.front()) {
            cout << "NO" << endl;
            return;
        }
        s.pop();
        q.pop();
    }
    if (s.empty() && q.empty()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> stackValues(n), queueValues(m);
    for (int i = 0; i < n; i++) {
        cin >> stackValues[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> queueValues[i];
    }

    checkStackQueue(n, m, stackValues, queueValues);
    
    return 0;
}