// #include<stdio.h>
// #include<string.h>

// int main() {
//     int t;
//     scanf("%d", &t);

//     while(t--) {
//         char str[10001];
//         scanf("%s", str);

//         int count_cap = 0, count_sm = 0, count_digit = 0;

//         for(int i = 0; i < strlen(str); i++) {
//             if((str[i] <= '90') && (str[i] >= '65')) count_cap++;
//             else if((str[i] <= '122') && (str[i] >= '97')) count_sm++;
//             else count_digit++;
//         }

//         printf("%d %d %d\n", count_cap, count_sm, count_digit);
//     }

//     return 0;
// }

#include<stdio.h>
#include<string.h>

int main() {
    int t; 
    scanf("%d", &t);

    while (t--) {
        char str[10000];

        scanf("%s", str);

        int cap_let =0;
        int sm_let = 0; 
        int digit = 0;

        for (int i = 0; i < strlen(str);i++) {   
            if (str[i] >= 'A' && str[i] <= 'Z') {
                cap_let++;
            }   
            else if (str[i] >= 'a' && str[i] <= 'z') {
                sm_let++;
            } 
            else if (str[i] >= '0' && str[i] <= '9') {
                digit+=1; 
            }
        }
        printf("%d %d %d\n", cap_let, sm_let, digit);
    }

    return 0; 
}