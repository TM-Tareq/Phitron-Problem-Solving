#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int N;
    cin >> N;
    long long int A[N];

    for(long long int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A, A + 5); // ascending
    for(long long int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    
    cout << endl;

    sort(A, A + 5, greater<long long int>()); // descending
    for(long long int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    
    return 0;
}