#include<stdio.h>
#include<stdbool.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int found = false;

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);

        if(arr[i] == val) {
            printf("%d", i);
            found = true;
            break;
        }
    }
    if(!found) printf("-1");



    return 0;
}


// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B