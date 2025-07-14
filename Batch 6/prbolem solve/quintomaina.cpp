#include<bits/stdc++.h>
using namespace std;
int main() {
    int testCase;
    cin >> testCase;

    while(testCase --) {
        int n; // the number of notes in the melody

        cin >> n;

        int melody[n];

        for(int i = 0; i < n; i++) {
            cin >> melody[i];
        }

        int flag = 1;

        for(int i = 0; i < n - 1; i++) {
            if(abs(melody[i] - melody[i + 1]) != 5 && abs(melody[i] - melody[i + 1]) != 7) {
                flag = 0;
            }
        }

        if(flag == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

        // for(int i = 0; i < n; i++) {
        //     int melody;
        //     cin >> melody;
        // }
    }
    return 0;
}