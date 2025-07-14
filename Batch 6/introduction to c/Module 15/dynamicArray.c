#include<stdio.h>
#include<stdlib.h>

int main() {
    // using malloc
    int *arr = (int *)malloc(5 * sizeof(int));

    // using calloc
    // int *arr = (int *) calloc(5, sizeof(int));

    for(int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }

    for(int i =0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    int *temp = arr;

    // using realloc
    arr = (int *)realloc(arr, 10 * sizeof(int));
    // Amra jototuku memory allocate korte cacchi oi poriman memory jodi sequentially(jehetu array sequential memory te data rakhe) available na thake, sekhetre realloc function ti NULL return korte pare

    if(arr == NULL) {
        arr = temp;
    }

    for(int i = 5; i < 10; i++) {
        arr[i] = 100;
    }

    for(int i =0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*
malloc(size) - Memory Allocation.Here size means (how many variable & its data type)
realloc(ptr, size) - Re allocation
calloc(length, size) - Contiguous Allocation
free(ptr)
 */