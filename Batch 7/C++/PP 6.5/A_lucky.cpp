#include<bits/stdc++.h>
using namespace std;
int main() {
    int testCase;
    cin >> testCase;

    int sum = 0, diff = 0, total = 0;

    while(testCase--) {
        string num;
        
        cin >> num;

        for(int i = 0; i < num.size(); i++) {
            if(i < 3) sum += num[i];
            else diff += num[i];
        }

        total = sum - diff;

        if(total == 0) cout << "YES" << endl;
        else cout << "NO" << endl;

        sum = 0;
        diff = 0;
        total = 0;
    }

    return 0;
}