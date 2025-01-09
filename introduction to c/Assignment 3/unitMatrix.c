#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Input the size of the matrix

    int matrix[N][N];  // Declare an N * N matrix

    // Input the matrix elements
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is a unit matrix
    int isUnitMatrix = 1;  // Assume it is a unit matrix

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) {  // Diagonal element
                if (matrix[i][j] != 1) {
                    isUnitMatrix = 0;
                    break;
                }
            } else {  // Non-diagonal element
                if (matrix[i][j] != 0) {
                    isUnitMatrix = 0;
                    break;
                }
            }
        }
        if (!isUnitMatrix) {
            break;
        }
    }

    // Output the result
    if (isUnitMatrix) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
