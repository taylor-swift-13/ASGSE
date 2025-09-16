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
    loop invariant 1 <= i <= LARGE_INT;
    loop invariant 0 <= k <= 1;
    loop invariant j == i;
    loop invariant i + k == j + 1;
    loop assigns i, j, k;
    */
    while (i < LARGE_INT) {
        i = i + 1;
        j = j + k;
        k = k - 1;
        // @ assert 1 <= i + k && i + k <= 2 && i >= 1;
    }
    return 0;
}