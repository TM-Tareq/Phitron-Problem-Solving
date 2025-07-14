// even odd pos neg counting using function

#include<stdio.h>

int even = 0;
int odd = 0;
int pos = 0;
int neg = 0;

void evenOddPos(int num) {
    if(num > 0) {
        pos++;
    }
    if(num == 0) {
        even++;
    } else if(num % 2 == 0){
        even++;
    } else {
        odd++;
    }
}

void evenOddNeg(int num) {
    neg++;

    if(num % 2 == 0) {
        even++;
    } else {
        odd++;
    }
}


int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        int x;
        scanf("%d", &x);
        if(x >= 0) {
            evenOddPos(x);
        } else {
            evenOddNeg(x);
        }

    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, pos, neg);

    return 0;
}

/**
 Even: 3
Odd: 2
Positive: 1
Negative: 3

 */