#include<bits/stdc++.h>
using namespace std;
int main() {
    int testCase;
    cin >> testCase;

    long long int n, a, b, c;

    for(int i = 0; i < testCase; i++) {
        cin >> n >> a >> b >> c;

        // calculate the distance cover in one cycle
        long long int cycleDistance = a + b + c;

        long long int fullCycle = n / cycleDistance;

        long long int lefOver = n - (fullCycle * cycleDistance);

        if(lefOver == 0) {
            cout << fullCycle * 3 << endl;
            continue;
        }

        // simulate the remaining days
        long long int currentDay = fullCycle * 3 + 1;

        if(lefOver <= a) {
            cout << currentDay << endl;
        } else if(lefOver <= a + b) {
            cout << currentDay + 1 << endl;
        } else {
            cout << currentDay + 2 << endl;
        }

        // int sum = 0;

        // int count = 0;

        // // take the sequence so that the number order does not break
        // int sequence[3] = {a, b, c};

        // int j = 0;

        // while(n == true) {
        //     sequence[j] += sequence[j + 1];
        //     count++;
        //     j++;
        // }
        // cout << count;
    }
    return 0;
}

// https://codeforces.com/problemset/problem/2051/B


// leftover distance = 