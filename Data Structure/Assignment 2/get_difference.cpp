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
    Node* newNode = new Node(val);

    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    // tail = newNode;
    tail = tail->next;
}

int the_max(Node* head) {
    int max = head->val;
    int min = head->val;
    for(Node* i = head; i != NULL; i = i->next) {
        if(i->val > max) {
            max = i->val;
        }
        if(i->val < min) {
            min = i->val;
        }
    }

    int dif = max - min;

    return dif;
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

    int dif = the_max(head);

    cout << dif << endl;

    return 0;
}