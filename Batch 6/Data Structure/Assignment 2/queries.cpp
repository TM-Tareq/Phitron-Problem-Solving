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

void insert_at_head(Node* &head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    // newNode = head;
    head = newNode;
}

void insert_at_tail(Node* &head,Node* &tail, int val) {
    Node* newNode = new Node(val);

    if(head == NULL) {
        head = tail = newNode;
        return;
    }
    tail->next = newNode;
    // tail = newNode;
    tail = tail->next;
}

void delete_at_head(Node* &head) {
    if(head == NULL) return;
    Node* deletenode = head;
    head = head->next;
    delete deletenode;
}

void delete_at_any_pos(Node* &head, Node* &tail, int idx) {
    if (idx == 0) {
        delete_at_head(head);
        if (head == NULL) tail = NULL;
        return;
    }

    Node* temp = head;
    for (int i = 0; temp != NULL && i < idx - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) return;

    Node* newnode = temp->next;
    temp->next = newnode->next;

    if (newnode == tail) tail = temp;
    delete newnode;
}


void print_linked_list(Node* head) {
    Node* tmp = head;

    while(tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}


int main() {

    int queries;
    cin >> queries;

    Node* head = NULL;
    Node* tail = NULL;

    while(queries--) {
        int x, v;
        cin >> x >> v;

        if (x == 0) {
            insert_at_head(head, v);
            if(tail == NULL) tail = head;
        } else if (x == 1) {
            insert_at_tail(head, tail, v);
        } else if (x == 2) {
            delete_at_any_pos(head, tail, v);
        }
        print_linked_list(head);
    }
    
    return 0;
}