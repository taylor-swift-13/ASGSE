#include <assert.h>

int unknown1();
int unknown2();
int unknown3();
int unknown4();

/*
 * Taken from "Counterexample Driven Refinement for Abstract Interpretation" (TACAS'06) by Gulavani
 */
/*@
requires n > 0;
*/
void foo(int n) {
  int x = 0;
  int m = 0;
  /*@
  loop invariant 0 <= x <= n;
  loop invariant 0 <= m < n;
  loop invariant (x == 0 || m >= 0) && m < n;
  loop invariant \exists integer k; 0 <= k < x ==> m == k || m == 0;
  loop assigns x, m;
  */
  while (x < n) {
    if (unknown1()) {
      m = x;
    }
    x = x + 1;
  }
  if (n > 0) {
    // @ assert 0 <= m && m < n;
  }
}