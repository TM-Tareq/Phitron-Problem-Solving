#include<bits/stdc++.h>
using namespace std;
int main() {
    
    int testCase;
    cin >> testCase;

    int results[500];

    int a1, a2, a4, a5;
    cin >> a1 >> a2 >> a4 >> a5;

    int maxFib = 0;

    for(int i = 0; i < testCase; i++) {

        int maxFib = 0;

        // Possible values for a3
        int possibleA3[3] = {a1 + a2, a4 - a2, a5 - a4};

        for (int j = 0; j < 3; j++) {
            int a3 = possibleA3[j];
            int fibCount = 0;

            // Check the Fibonacci-like conditions
            if (a3 == a1 + a2) fibCount++;
            if (a4 == a2 + a3) fibCount++;
            if (a5 == a3 + a4) fibCount++;

            // Update maximum Fibonacciness
            if (fibCount > maxFib) {
                maxFib = fibCount;
            }
        }

        // Store the result for this test case
        results[i] = maxFib;
    }

    for (int i = 0; i < tes; i++) {
        cout << results[i] << endl;
    }

    return 0;
}