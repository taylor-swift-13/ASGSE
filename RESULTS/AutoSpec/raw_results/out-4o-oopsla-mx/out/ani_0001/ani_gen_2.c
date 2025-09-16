#include <stdio.h>

int fun(int n) {
    int i = 7;
    int x = 1;

    /*@
    loop invariant 7 <= i <= n + 3;
    loop invariant x == ((i - 7) / 3) + 1;
    loop invariant i % 3 == 1;
    loop assigns i;
    loop assigns x;
    */
    while(i <= n) {
        x += 1;
        i += 3;
    }
    return x;
}

int main() {
    int a = fun(10);
    // @ assert a == 3;
    printf("%d\n", a);
}