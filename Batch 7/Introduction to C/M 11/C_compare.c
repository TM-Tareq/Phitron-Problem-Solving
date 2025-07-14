#include<stdio.h>
int main() {
    char arr[21], arr2[21];

    scanf("%s%s", arr, arr2);
    
    int i = 0;

    while(1) {
        if(arr[i] == '\0') {
            printf("%s", arr);
            break;
        }
        else if(arr2[i] == '\0') {
            printf("%s", arr2);
            break;
        }
        else if(arr[i] < arr2[i]) {
            printf("%s", arr);
            break;
        }
        else if(arr[i] > arr2[i]) {
            printf("%s", arr2);
            break;
        }
        else if(arr[i] == arr2[i]) i++;
    }

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C