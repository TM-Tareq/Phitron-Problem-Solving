#include <bits/stdc++.h>
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

    if (val == -1) return NULL;

    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l != -1) {
            curr->left = new Node(l);
            q.push(curr->left);
        }
        if (r != -1) {
            curr->right = new Node(r);
            q.push(curr->right);
        }
    }
    return root;
}

void getLeftBoundary(Node* root, vector<int>& boundary) {
    Node* curr = root->left;
    while (curr) {
        if (curr->left || curr->right) boundary.push_back(curr->val);
        curr = (curr->left) ? curr->left : curr->right;
    }
}

void getLeafNodes(Node* root, vector<int>& boundary) {
    if (!root) return;
    if (!root->left && !root->right) {
        boundary.push_back(root->val);
        return;
    }
    getLeafNodes(root->left, boundary);
    getLeafNodes(root->right, boundary);
}
void getRightBoundary(Node* root, vector<int>& boundary) {
    vector<int> temp;
    Node* curr = root->right;
    while (curr) {
        if (curr->left || curr->right) temp.push_back(curr->val);
        curr = (curr->right) ? curr->right : curr->left;
    }
    reverse(temp.begin(), temp.end());
    boundary.insert(boundary.end(), temp.begin(), temp.end());
}

void printOuterBoundary(Node* root) {
    if (!root) return;

    vector<int> boundary;
    boundary.push_back(root->val);

    getLeftBoundary(root, boundary);

    getLeafNodes(root, boundary);

    getRightBoundary(root, boundary);

    for (int val : boundary) {
        cout << val << " ";
    }
}

int main() {
    Node* root = inputTree();
    printOuterBoundary(root);
    return 0;
}
