#include <assert.h>

/*
 * "nested4.c" from InvGen benchmark suite
 */

/*@
requires l > 0;
requires n > l;
*/
void foo(int n, int l) {
  int i,k;


  for (k=1; k<n; k++){
    /*@
    loop invariant 1 <= k <= n;
    loop invariant l <= i <= n;
    loop invariant k > 0;
    loop invariant i >= l;
    loop invariant l > 0;
    loop assigns i;
    loop assigns k;
    */
    for (i=l; i<n; i++) {
    }
    for (i=l; i<n; i++) {
      // @ assert 1<=i;
    }
  }

}
