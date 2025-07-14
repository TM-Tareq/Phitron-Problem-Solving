#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* inputTree() {
    int val;
    cin >> val;

    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;
    if(root != NULL) q.push(root);

    while(!q.empty()) {
        // 1. ber kore ana
        Node* p = q.front();
        q.pop();

        // 2. oi node ke niye kaaj korbo
        int l, r;
        cin >> l >> r;
        Node* myLeft, *myRight;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);

        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        p->left = myLeft;   // Assign left child
        p->right = myRight; // Assign right child

        // 3. children push kora
        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return root;
}

void levelOrder(Node* root) {
    if(root == NULL) {
        cout << "No Tree";
        return;
    }

    queue<Node *> q;
    q.push(root);

    while(!q.empty()) {
        // 1. Ber kore ana
        Node* f = q.front();
        q.pop();

        // 2. Oi node ke niye kaaj kora
        cout << f->val << " ";

        // 3. Children push kora
        if(f->left != NULL)
            q.push(f->left);
        if(f->right != NULL)
            q.push(f->right);
    }
}

int main() {
    Node* root = inputTree();

    levelOrder(root);

    return 0;
}