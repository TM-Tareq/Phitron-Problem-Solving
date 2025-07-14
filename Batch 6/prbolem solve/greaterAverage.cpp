#include<bits/stdc++.h>
using namespace std;
int main() {
    
    int a, b, c;

    int testCase;

    cin >> testCase;

    while(testCase --) {
        cin >> a >> b >> c;

        // int avg = (a + b) / 2;

        // // Debug: Print inputs and calculated average
        // cout << "Inputs: a = " << a << ", b = " << b << ", c = " << c << endl;
        // cout << "Calculated average: " << avg << endl;

        // (a + b) / 2 >= c;

        if((a + b) > 2 * c) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AVGPROBLEM