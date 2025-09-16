#include <stdio.h>

/*@
requires n >= 7;
ensures \result == ((n - 4) / 3);
assigns \nothing;
*/
int fun(int n) {
    int i = 7;
    int x = 1;

    /*@
    loop invariant x == (i - 4) / 3;
    loop invariant x == ((i - 7) / 3) + 1;
    loop invariant i % 3 == 1;
    loop invariant 7 <= i;
    loop invariant 1 <= x;
    loop invariant (i - 7) % 3 == 0;
    loop assigns x;
    loop assigns i;
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