#include<stdio.h>
#include<math.h>


int main() {
    int N;
    scanf("%d", &N);

    int A[N][N];

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int main_diagonal = 0, sec_diagonal = 0;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(i == j) {
                main_diagonal += A[i][j];
            }

            if(i + j == N - 1) {
                sec_diagonal += A[i][j];
            }
        }
    }

    int dif = abs(main_diagonal - sec_diagonal);

    printf("%d\n", dif);


    return 0;
}