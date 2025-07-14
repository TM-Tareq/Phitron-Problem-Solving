#include<stdio.h>
#include<string.h>

int main() {
    int n;
    scanf("%d", &n);

    char arr[n];

    scanf("%s", arr);

    int sum = 0;

    for(int i = 0; i < strlen(arr); i++) {
        sum+= arr[i] - '0';
    }

    printf("%d", sum);

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K