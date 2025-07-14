#include<stdio.h>
int main() {
    int pass;

    while(scanf("%d", & pass) != EOF) {
        if(pass == 1999) {
            printf("Correct");
            break;
        } else {
            printf("Wrong\n");
        }
    }

    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// int main() {
 
//     int x;
    
//     while(cin >> x) {
//         if(x == 1999) {
//             cout << "Correct" << endl;
//             break;
//         } else {
//             cout << "Wrong" << endl;
//         }
//     }
//     return 0;
// }