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
    loop invariant 1 <= k <= n;
    loop invariant \forall integer m; l <= m < i ==> true;
    loop assigns i;
    
    loop invariant 1 <= k < n;
    loop invariant \forall integer m; l <= m < i ==> true;
    loop assigns i;
    */
    for (i = l; i < n; i++) {

    }
    for (i = l; i < n; i++) {
      // @ assert 1 <= k;
    }
  }

}