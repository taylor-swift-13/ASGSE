#include <assert.h>
int unknown1();

/*
 * "nest-if8" from InvGen benchmark suite
 */

void main() {
  int i, j, k, n, m;
  if (m + 1 < n);
  else return;
  for (i = 0; i < n; i += 4) {
    for (j = i; j < m;) {
      if (unknown1()) {
        // @ assert j >= 0;
        j++;
        k = 0;
        /*@
        loop invariant 0 <= k <= j;
        loop invariant k >= 0;
        loop assigns k;
        */
        while (k < j) {
          k++;
        }
      } else {
        // @ assert n + j + 5 > i;
        j += 2;
      }
    }
  }
}