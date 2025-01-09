#include<bits/stdc++.h>
using namespace std;
int main() {
    int w;
    cin >> w;

    // int flag = 1;

    // while(w > 2 && w % 2 != 0) {
    //     flag = 0;
    //     break;
    // }

    if(w > 2 && w % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/B