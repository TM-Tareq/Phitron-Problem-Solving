#include<stdio.h>
#include <stdbool.h>


int count = 0;

// int checkValue(int key, int arr[], int size) {
//     for(int i = 0; i < size; i++) {
//         if(key == arr[i]) {
//             return 0;
//         }
//     }
//     return count++;
// }

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];

    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int freq[100000] = {0};
    // 10^5 = 100000

    for(int i = 0; i < N; i++) {
        freq[arr[i]] = 1;
    }

    for(int i = 0; i < N; i++) {
        if(freq[i] == 1) {
            count++;
        }
    }

    // int cnt = 0;

    // for(int i = 0; i < N; i++) {

    //     // if(checkValue(arr[i], arr, i) == 1) {
    //     //     cnt++;
    //     // }

    //     if(checkValue(arr[i], arr, N) == 1) {
    //         count;
    //     }
    // }

    printf("%d", count);
    

    return 0;
}



// 


#include <stdio.h>

#define MAX_VAL 100000 // Maximum possible value of array elements

int main() {
    int n;
    scanf("%d", &n); // Read the size of the array

    int arr[n];           // Static array for input values
    int freq[MAX_VAL + 1] = {0}; // Frequency array initialized to 0

    // Read the array and count the frequencies
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++; // Increment the frequency for the current element
    }

    int count = 0;
    // Count numbers that appear only once
    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] == 1) {
            count++;
        }
    }

    printf("%d\n", count); // Print the result
    return 0;
}


https://chatgpt.com/c/67736383-1880-8010-85e6-24f95231af65