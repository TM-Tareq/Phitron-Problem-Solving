#include<stdio.h>
#include<string.h>

int main() {
    char arr[100001];
    scanf("%s", arr);

    int l = strlen(arr);
    
    for(int i = 0; i < l; i++) {
        if(arr[i] == ',') arr[i] = ' ';
        else if(arr[i] <= 122 && arr[i] >= 97) arr[i] = arr[i] - 32;
        else arr[i] = arr[i] + 32;
    }

    printf("%s", arr);

    return 0;
}