#include<stdio.h>

int main() {
  // int a[5] = {10, 20, 30, 40, 50};
  // printf("%d", *a);

  int a = 5;

  int *x = &a;

  int **y = &x;

printf("%d %d" , **y, &a);
}