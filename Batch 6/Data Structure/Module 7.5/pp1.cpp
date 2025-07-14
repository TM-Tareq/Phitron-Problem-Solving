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

int main() {

    Node* head1 = NULL;
    Node* tail1 = NULL;
    int val;


    while(true) {
        cin >> val;

        if(val == -1) {
            break;
        }
        insert_at_tail(head1, tail1, val);
    }

    int totalSize1 = theSize(head1);
    
    Node* head2 = NULL;
    Node* tail2 = NULL;
    while(true) {
        cin >> val;

        if(val == -1) {
            break;
        }
        insert_at_tail(head2, tail2, val);
    }

    int totalSize2 = theSize(head2);

    cout << ((totalSize1 != totalSize2) ? "NO" : "YES");
    
    return 0;
}