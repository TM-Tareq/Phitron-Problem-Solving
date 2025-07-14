// // #include<stdio.h>
// // int main() {
// //     int N, M;
// //     scanf("%d%d", &N, &M);

// //     int arr[N][M];
// // }


// #include<stdio.h>
// int main ()
// {
//     int a;
//     scanf("%d",&a);
//     int b[a];
//     for(int i=0; i<a; i++)
//     {
//         scanf("%d",&b[i]);

//     }
//     int d;


//      int c=0;
//      int m=0;
//     for(int i=0; i<a; i++)
//     {
//         d=b[i];
//          c=0;
//         for(int j=0; j<a; j++)
//         {  if(i==j)
//         {
//             continue;
//         }
//          else{
//             if(d==b[j])
//             {
//                 c++;
//             }
//          }

//         }
//         if(c==0)
//         {
//            m++;
//         }

//     }

//     printf("%d ",m);


// }



#include <stdio.h>

int main() {
    int n, m, x;
    scanf("%d %d %d", &n, &m, &x); // Read the dimensions and number of queries

    int matrix[n][m];
    // Read the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Read the numbers to search and process each one
    for (int k = 0; k < x; k++) {
        int number, count = 0;
        scanf("%d", &number);

        // Count occurrences in the matrix
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == number) {
                    count++;
                }
            }
        }

        // Print the result for the current number
        printf("%d\n", count);
    }

    return 0;
}

