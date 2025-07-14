#include<iostream>
using namespace std;

int main() {
    list<int> linkedList;
    int value;
    
    while (cin >> value && value != -1) {
        linkedList.push_back(value);
    }
    
    linkedList.sort();
    linkedList.unique();
    
    for (int num : linkedList) {
        cout << num << " ";
    }
    
    return 0;
}8