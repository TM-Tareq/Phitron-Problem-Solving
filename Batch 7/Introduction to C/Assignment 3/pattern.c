#include<stdio.h>
// int main() {
//     int n;
//     scanf("%d", &n);

//     int star = 1;

//     for(int i = 1; i <= n; i++) {

//         for(int j = 1; j <= n - i; j++) {
//             printf(" ");
//         }

//         for(int j = 1; j <= star; j++) {
//             if(i % 2 != 0) {
//                 printf("#");
//             } else {
//                 printf("-");
//             }
//         }
//         star += 2;
//         printf("\n");
//     }

//     for(int i = n - 1; i >= 1; i--) {
       
//         for(int j = n - 1; j >= 1; j--) {
//             printf(" ");
//         }
        
//         for(int j = 1; j <= 2 * i - 1; j++) {
//             if(i % 2 != 0) {
//                 printf("#");
//             } else {
//                 printf("-");
//             }
//         }
//         star += 2;
//         printf("\n");
//     }

//     return 0;
// }



int main() {

    int i, j, k, n;

    scanf("%d", &n); 

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (k = 1; k <= 2 * i - 1; k++) {
            if (i % 2 != 0) printf("#"); else printf("-");
        }
        printf("\n");
    }


    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (k = 1; k <= 2 * i - 1; k++) {
            if (i % 2 != 0) printf("#");
                else printf("-");
        }
        printf("\n");
    }

    return 0;
}