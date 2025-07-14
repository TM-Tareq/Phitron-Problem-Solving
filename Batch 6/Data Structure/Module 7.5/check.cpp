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
    if(head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = tail->next;
}

int the_max(Node* head) {
    int max = head->val;
    for(Node* i = head; i->next != NULL; i = i->next) {
        if(i->val > max) {
            max = i->val;
        }
    }
    return max;
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

    print_linked_list(head);
    // int max_val = the_max(head);

    // cout << max_val << endl;
    return 0;
}