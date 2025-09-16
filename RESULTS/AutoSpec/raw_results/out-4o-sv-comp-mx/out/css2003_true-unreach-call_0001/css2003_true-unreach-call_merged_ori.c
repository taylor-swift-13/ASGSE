// Source: Michael Colon, Sriram Sankaranarayanan, Henny Sipma: "Linear
// Invariant Generation using Non-Linear Constraint Solving", CAV 2003.
#include "assert.h"
# define LARGE_INT 1000000

/*@ 
requires 0 <= k && k <= 1;
*/
int foo(int k) {
    int i,j;
    i = 1;
    j = 1;
    /*@
    loop invariant k <= 1;
    loop invariant j == i;
    loop invariant j == i + k;
    loop invariant i <= LARGE_INT;
    loop invariant i + k == j + 1;
    loop invariant i + k <= 2;
    loop invariant 1 <= j + k;
    loop invariant 1 <= i;
    loop invariant 1 <= i + k;
    loop invariant 1 <= i + k && i + k <= 2;
    loop invariant 0 <= k;
    loop assigns k;
    loop assigns j;
    loop assigns i;
    */
    while (i < LARGE_INT) {
        i = i + 1;
        j = j + k;
        k = k - 1;
        // @ assert 1 <= i + k && i + k <= 2 && i >= 1;
    }
    return 0;
}