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
        newnode->prev = tail;
        tail = newnode;
    }
    void pop() {
        size--;
        Node* deletenode = head;
        head = head->next;

        delete deletenode;

        if(head == NULL) {
            tail = NULL;
            return;
        }
        head->prev = NULL;
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

int main() {
    myQueue q;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int val;
        cin >> val;
        q.push(val);
    }
    cout << q.front() << " " << q.back() << " " << q.getSize() << endl;

    return 0;
}