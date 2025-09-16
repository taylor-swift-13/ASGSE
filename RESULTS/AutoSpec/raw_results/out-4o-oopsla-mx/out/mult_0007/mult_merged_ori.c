#include <stdio.h>

int mul(int a, int b) {
    int x = a, y = b, prod = 0;

    /*@
    loop invariant y == b;
    loop invariant x + prod / b == a;
    loop invariant prod == a * b - x * b;
    loop invariant prod == (a - x) * b;
    loop invariant 0 <= x;
    loop assigns x;
    loop assigns prod;
    */
    while(x >= 0) {
        prod = prod + y;
        x--;
    }
    return prod;
}

int main() {
    int pdt = mul(2, 5);
    // @ assert pdt == 10;
}