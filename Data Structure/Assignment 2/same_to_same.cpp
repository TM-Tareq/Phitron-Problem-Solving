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

bool same_check(Node* head1, Node* head2) {
    Node* tmp1 = head1;
    Node* tmp2 = head2;

    int size1 = theSize(head1);
    int size2 = theSize(head2);

    if(size1 == size2) {
        for(Node* i = tmp1, *j = tmp2; i != NULL && j != NULL; i = i->next, j = j->next) {
            if(i->val != j->val) {
                return false;
            }
        }
        return true;
    } else {
        return false;
    }
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
    
    Node* head2 = NULL;
    Node* tail2 = NULL;
    while(true) {
        cin >> val;

        if(val == -1) {
            break;
        }
        insert_at_tail(head2, tail2, val);
    }

    bool result = same_check(head1, head2);

    cout << (result ? "YES" : "NO");
    
    return 0;
}