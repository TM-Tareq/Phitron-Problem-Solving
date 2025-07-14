#include<bits/stdc++.h>
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

void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);
    if(head = NULL) {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = tail->next;
}

int theSize(Node* head) {
    int count = 0;
    Node* tmp = head;

    while(tmp != NULL) {
        count++;
        tmp = tmp->next;
    }

    return count;
}

void insert_queries(Node* head,Node* &tail, int idx, int num) {
    int size = theSize(head);

    if(idx = size) {
        insert_at_tail(head, tail, num);
    } else if(idx > size) {
        cout << "Invalid" << endl;
    } else {
        Node* newnode = new Node(num);
    Node* tmp = head;

    for(int i = 1; i < idx; i++) {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
    }
}

void print_linked_list(Node* head) {
    Node* tmp = head;

    while(tmp != NULL) {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int val;

    while(true) {
        cin >> val;
        if(val == -1) {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    int idx, num;
    while(cin >> idx >> num) {
        insert_queries(head, tail, idx, num);
        print_linked_list(head);
    }
    return 0;
}