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

void insert_at_tail(Node* &head,Node* &tail, int val) {
    Node* newnode = new Node(val);
    if(head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = tail->next;
}

void print_linked_list(Node* head) {
    Node* tmp = head;
    while(tmp != NULL) {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

int countSize(Node* head) {
    int count = 0;
    Node* tmp = head;
    while(tmp != NULL) {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void insert_at_head(Node* head, int val) {
    Node* newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}

void inset_at_tail(Node* head, Node* &tail, int val) {
    Node* newnode = new Node(val);

    if(head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = tail->next;
}

void insert_at_any_pos(Node* &head, int idx, int val) {
    Node* newnode = new Node(val);
    Node* tmp = head;
    for(int i = 1; i < idx; i++) {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
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
    print_linked_list(head);

    insert_at_head(head, 100);
    
    insert_at_tail(head, tail, 200);

    insert_at_any_pos(head, 2, 500);

    int size = countSize(head);
    cout << size << endl;

    return 0;
}