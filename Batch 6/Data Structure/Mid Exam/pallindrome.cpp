#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;
    Node(int val) {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

bool isPalindrome(Node* head) {
    if (!head) return true;
    Node* tail = head;
    while (tail->next) {
        tail = tail->next;
    }
    
    while (head != tail && head->prev != tail) {
        if (head->data != tail->data) return false;
        head = head->next;
        tail = tail->prev;
    }
    return true;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int value;
    
    while (cin >> value && value != -1) {
        Node* newNode = new Node(value);
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    
    cout << (isPalindrome(head) ? "YES" : "NO") << endl;
    
    return 0;
}
