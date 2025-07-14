#include<iostream>
using namespace std;

int main() {
    list<string> webHistory;
    string address;
    
    while (cin >> address && address != "end") {
        webHistory.push_back(address);
    }
    
    int Q;
    cin >> Q;
    
    list<string>::iterator current = webHistory.begin();
    
    while (Q--) {
        string command;
        cin >> command;
        
        if (command == "visit") {
            string site;
            cin >> site;
            list<string>::iterator it = find(webHistory.begin(), webHistory.end(), site);
            if (it != webHistory.end()) {
                current = it;
                cout << *current << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else if (command == "next") {
            if (current != webHistory.end() && next(current) != webHistory.end()) {
                ++current;
                cout << *current << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else if (command == "prev") {
            if (current != webHistory.begin()) {
                --current;
                cout << *current << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }
    }
    
    return 0;
}
