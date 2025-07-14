#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* prev;
    node* next;
    node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

void insertAtIndex(node*& head, node*& tail, int& size, int index, int value) {
    if (index < 0 || index > size) {
        cout << "Invalid" << endl;
        return;
    }
    
    node* newNode = new node(value);
    if (index == 0) {
        if (!head) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    } else if (index == size) {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    } else {
        node* temp = head;
        for (int i = 0; i < index - 1; i++) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next->prev = newNode;
        temp->next = newNode;
        newNode->prev = temp;
    }
    size++;
    
    cout << "L -> ";
    node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    
    cout << "R -> ";
    temp = tail;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main() {
    int Q;
    cin >> Q;
    node* head = NULL;
    node* tail = NULL;
    int size = 0;
    
    for (int i = 0; i < Q; i++) {
        int X, V;
        cin >> X >> V;
        insertAtIndex(head, tail, size, X, V);
    }
    
    return 0;
}
