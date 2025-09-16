#include <stdio.h>

int func(int c) {
    int x = c;
    int y = 0;

    /*@
    loop invariant x >= 0;
    loop invariant y <= c;
    loop invariant x + y == c;
    loop invariant \forall integer k; 0 <= k <= y ==> k <= c;
    loop invariant x + y == c;
    loop invariant 0 <= y;
    loop assigns y;
    loop assigns x;
    */
    while(x > 0) {
        x = x - 1;
        y = y + 1;
    }
    return y;
}

// write a test
void main() {
    int t = func(5);
    // @ assert t == 5;
}