#include <iostream>
#include <list>
using namespace std;

void printList(list<int> d) {
    cout << "L -> ";
    for (int val : d) {
        cout << val << " ";
    }
    cout << endl;
    
    cout << "R -> ";
    for (auto it = --d.end(); it != d.begin(); --it) {
        cout << *it << " ";
    }
    if (!d.empty()) {
        cout << *d.begin();
    }
    cout << endl;
}

int main() {
    int Q;
    cin >> Q;
    list<int> d;
    
    for (int i = 0; i < Q; i++) {
        int X, V;
        cin >> X >> V;
        
        if (X == 0) {
            d.push_front(V);
        } else if (X == 1) {
            d.push_back(V);
        } else if (X == 2) {
            if (V >= 0 && V < d.size()) {
                auto it = d.begin();
                for (int j = 0; j < V; j++) {
                    ++it;
                }
                d.erase(it);
            }
        }
        
        printList(d);
    }
    
    return 0;
}