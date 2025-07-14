#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack {
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int size = 0;
        vector<int> v;

        void push(int val) {
            v.push_back(val);
        }
        void pop() {
            v.pop_back();
        }
        int top() {
            return v.back();
        }
        bool equalityCheck() {
            
        }
};

int main() {
    myStack st;

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.push(x);
    }

    for(int i = 0; i < m; i++) {
        int x;
        cin >> x;
        st.push(x);
    }

    st.equalityCheck();

    return 0;
}