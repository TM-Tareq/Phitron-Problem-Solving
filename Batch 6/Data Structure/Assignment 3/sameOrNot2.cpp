#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class myStack {
    public:
    Node* topNode = NULL;
    int size = 0;

    void push(int val) {
        size++;
        Node* newnode = new Node(val);
        newnode->next = topNode;
        topNode = newnode;
    }

    void pop() {
        if (topNode == NULL) return;
        size--;
        Node* deletenode = topNode;
        topNode = topNode->next;
        delete deletenode;
    }

    int top() {
        return topNode->val;
    }

    int getSize() {
        return size;
    }

    bool empty() {
        return topNode == NULL;
    }
};

class myQueue {
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int size = 0;

    void push(int val) {
        size++;
        Node* newnode = new Node(val);

        if(head == NULL) {
            head = newnode;
            tail = newnode;
            return;
        }

        tail->next = newnode;
        tail = newnode;
    }

    void pop() {
        if (head == NULL) return;
        size--;
        Node* deletenode = head;
        head = head->next;
        delete deletenode;

        if(head == NULL) {
            tail = NULL;
        }
    }

    int front() {
        return head->val;
    }

    int back() {
        return tail->val;
    }

    int getSize() {
        return size;
    }

    bool empty() {
        return head == NULL;
    }
};

void checkStackQueue(int n, int m, vector<int>& stackValues, vector<int>& queueValues) {
    myStack stack;
    myQueue queue;

    for (int i = 0; i < n; i++) stack.push(stackValues[i]);
    for (int i = 0; i < m; i++) queue.push(queueValues[i]);

    while (!stack.empty() && !queue.empty()) {
        if (stack.top() != queue.front()) {
            cout << "NO" << endl;
            return;
        }
        stack.pop();
        queue.pop();
    }

    if (stack.empty() && queue.empty()) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> stackValues(n), queueValues(m);
    for (int i = 0; i < n; i++) cin >> stackValues[i];
    for (int i = 0; i < m; i++) cin >> queueValues[i];

    checkStackQueue(n, m, stackValues, queueValues);

    return 0;
}