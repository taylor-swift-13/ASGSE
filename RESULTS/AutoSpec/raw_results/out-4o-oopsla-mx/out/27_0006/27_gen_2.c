#include <assert.h>

/*
  * "nested2.c" from InvGen benchmark suite
  */
/*@
requires l > 0;
*/
void foo(int l) {
  int i, k, n;

  for (k = 1; k < n; k++) {
    /*@
    loop invariant l <= i;
    loop invariant k <= n;
    loop invariant k < n;
    loop invariant i <= n;
    loop invariant \forall integer j; 0 <= j < i ==> l <= j < n;
    loop invariant 1 <= k;
    loop invariant 0 < l;
    loop invariant 0 < k;
    loop assigns i;
    */
    for (i = l; i < n; i++) {

    }
    /*@
    loop invariant l <= i;
    loop invariant i <= n;
    loop invariant k < n;
    loop invariant \forall integer j; l <= j < i ==> l <= j < n;
    loop invariant 0 < l;
    loop invariant 1 <= k;
    loop invariant n > k;
    loop assigns i;
    */
    for (i = l; i < n; i++) {
      // @ assert 1 <= k;
    }
  }

}