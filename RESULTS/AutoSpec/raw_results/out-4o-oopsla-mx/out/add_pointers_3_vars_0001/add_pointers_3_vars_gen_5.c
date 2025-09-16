#include <limits.h>

/*@
requires \valid(a) && \valid(b) && \valid(r);
requires *a >= INT_MIN && *b >= INT_MIN && *r >= INT_MIN;
requires *a <= INT_MAX && *b <= INT_MAX && *r <= INT_MAX;
ensures \result == *a + *b + *r;
assigns \nothing;
*/
int add(int *a, int *b, int *r) {
    return *a + *b + *r;
}

int main() {
    int a = 24;
    int b = 32;
    int r = 12;
    int x;

    x = add(&a, &b, &r) ;
    // @ assert x == a + b + r;
    // @ assert x == 68 ;

    x = add(&a, &a, &a) ;
    // @ assert x == a + a + a;
    // @ assert x == 72 ;
}