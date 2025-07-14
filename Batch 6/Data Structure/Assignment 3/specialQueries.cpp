#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    queue<string> ticketQueue;

    while (q--) {
        int command;
        cin >> command;

        if (command == 0) {
            string name;
            cin >> name;
            ticketQueue.push(name);
        } 
        else if (command == 1) {
            if (ticketQueue.empty()) {
                cout << "Invalid" << endl;
            } else {
                cout << ticketQueue.front() << endl;
                ticketQueue.pop();
            }
        }
    }

    return 0;
}