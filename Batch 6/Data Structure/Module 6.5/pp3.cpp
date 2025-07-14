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

int theSize(Node* head) {
    int count = 0;
    Node* tmp = head;

    while(tmp != NULL) {
        count++;
        tmp = tmp->next;
    }

    return count;
}

void middle_element(Node* head) {
    int size = theSize(head);
    Node* tmp = head;
    if(size % 2 != 0) {
        int s = ceil(size / 2);
        for(int i = 0; i < s; i++) {
            tmp->next;
        }
        cout << tmp->val << endl;
    }
    else {
        tmp = head;
        int si = round(size / 2);
        for(int i = 0; i <= si; i++) {
            tmp->next;
        }
        cout << tmp->val << " " << tmp->next->val << endl;
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
    middle_element(head);
    
    return 0;
}