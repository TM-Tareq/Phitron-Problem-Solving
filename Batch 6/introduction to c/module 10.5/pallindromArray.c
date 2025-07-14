#include<stdio.h>
#include<stdbool.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[1000];
    
    for(int i = 0; i < N;i++) {
        scanf("%d", &arr[i]);
    }

    int i = 0, j = N - 1;

    bool pal = true;

    while(i <= j) {
        if(arr[i] != arr[j]) {
            pal = false;
            break;
        }
        i++;
        j--;
    }

    if(pal) printf("YES\n");
    else printf("NO\n");

    return 0;
    
}