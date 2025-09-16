#include <stdio.h>
#include <math.h>

int fun(int n) {
    double y = 0;
    double i = 0;

    /*@
    loop invariant 0 <= i <= n + 1;
    loop invariant y == \sum integer k; 0 <= k < i; pow(2.0, k);
    loop assigns i, y;
    */
    while(i <= n) {
        y = y + pow(2.0, i);
        i = i + 1;
    }
    return y;
}

int main() {
    int res = fun(4);
    //@assert res == 7;
}