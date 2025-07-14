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

    if (val == -1) return NULL;

    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l != -1) {
            p->left = new Node(l);
            q.push(p->left);
        }
        if (r != -1) {
            p->right = new Node(r);
            q.push(p->right);
        }
    }
    return root;
}
void print(Node* root) {
    if (!root) return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        cout << temp->val << " ";

        if (temp->left) q.push(temp->left);
        if (temp->right) q.push(temp->right);
    }
}
vector<int> leftPrint(Node* root){
    vector<int>ans;
    if (!root) return ans;

    queue<Node*> q;
    
    q.push(root);

    while (!q.empty()) {
        // cout<<"check ";
        Node* temp = q.front();
        q.pop();
        // cout << temp->val << " ";
        ans.push_back(temp->val);

        if (temp->left) q.push(temp->left);
        // if (temp->right) q.push(temp->right);
    }
    return ans;
}
vector<int>rightPrint(Node* root){
    vector<int>ans;
    if (!root) return ans;

    queue<Node*> q;
    q.push(root);
    
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        // cout << temp->val << " ";
        ans.push_back(temp->val);

        // if (temp->left) q.push(temp->left);
        if (temp->right) q.push(temp->right);
    }
    return ans;
}

int main() {
    Node* root = inputTree();
    // print(root);
    vector<int>ans1=leftPrint(root);
    reverse(ans1.begin(),ans1.end());
    vector<int>ans2=rightPrint(root);
    for(int i=0;i<ans2.size();i++){
        if(i==0)continue;
        ans1.push_back(ans2[i]);
    }
    for(int i=0;i<ans1.size();i++)cout<<ans1[i]<<" ";
}
// 10
// 20 30
// 40 70 -1 50
// 90 110 -1 -1 80 60
// -1 -1 -1 -1 100 -1 -1 -1
// -1 -1