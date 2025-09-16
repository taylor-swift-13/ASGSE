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
    loop invariant i <= n;
    loop invariant \forall integer m; k <= m < n ==> m >= 1;
    loop invariant \forall integer j; l <= j < n ==> \forall integer m; 1 <= m < k;
    loop invariant 1 <= k;
    loop invariant 0 < l;
    loop assigns i;
    */
    for (i = l; i < n; i++) {

    }
    /*@
    loop invariant l <= i;
    loop invariant i <= n;
    loop invariant k <= n;
    loop invariant \forall integer m; k <= m < n ==> m >= 1;
    loop invariant \forall integer j; l <= j < n ==> \forall integer m; 1 <= m < k;
    loop invariant 1 <= k;
    loop invariant 0 < l;
    loop assigns i;
    */
    for (i = l; i < n; i++) {
      // @ assert 1 <= k;
    }
  }

}