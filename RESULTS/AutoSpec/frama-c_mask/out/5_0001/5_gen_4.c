#include <limits.h>


/*@
requires val >= INT_MIN && val <= INT_MAX;    
ensures \result >= 0;
assigns \nothing;
*/
int abs(int val) {
    if(val < 0) return -val;
    return val;
}

void foo(int a) {
    int b = abs(-42);
    int c = abs(42);
    int d = abs(a);
    int e = abs(INT_MIN);
}
