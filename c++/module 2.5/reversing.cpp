#include<bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    int arr[N];

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < N / 2; i++) {
        for(int j = N - 1; j >= 0; j--) {
            swap(arr[i], arr[j]);
        }
    }

    for(int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }


    return 0;
}