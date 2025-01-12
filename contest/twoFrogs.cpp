#include<bits/stdc++.h>
#include <cmath>
using namespace std;
// void checkWinOrLose(int arr[], int n, int keyALice, int keyBob) {

//     int low = 0, high = n - 1;

//     while(low <= high) {
//         int mid = low + (high -low) / 2;

//         if(arr[mid] == keyALice) {
//             cout << "YES" << endl;
//         } else if(arr[mid] < keyALice) {
//             keyALice ++;
//         } else {
//             keyALice ++;
//         }
//     }

// }


int main() {
    
    int testCase;
    cin >> testCase;

    while(testCase --) {
        int n, a, b;
        cin >> n >> a >> b;

        // a for Alice & b for BOb

        // int arr[n];

        // for(int i = 0; i < n; i++) {
        //     arr[i] = i + 1;
        // }

        // checkWinOrLose(arr, n ,a, b);

        int distance = 0;

        if(a > b) {
            distance =(a - b);
        } else {
            distance = b - a;
        }

        if(distance % 2 == 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}