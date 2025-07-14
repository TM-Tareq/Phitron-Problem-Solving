#include<stdio.h>
int main() {
    for(int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }
    for(int i = 1; i <= 5; ++i) {
        printf("%d\n", i);
    }

    int x, y;
    // pre increment
    x = 10;
    y = --x; // first x = 9 then y = 9


    int m, n;
    // post increment
    m = 10;
    n = m++; // n = 10 then m = 10
    

    return 0;
}


// post increment e age original value ta boshe then increment hoy

// pre increment e age increment er kaj ta hoy then value ta boshe