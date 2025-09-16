#include <assert.h>
int unknown1();
int unknown2();
int unknown3();
int unknown4();

/*
 * From "Simplifying Loop Invariant Generation using Splitter Predicates", Sharma et al. CAV'11
 */

/*@
requires n >= 0;
requires m >= 0;
requires m < n;
*/
void foo(int n, int m)
{
  int x = 0; 
  int y = m;
  /*@
  loop invariant 0 <= x <= n;
  loop invariant y == m + (x > m ? x - m : 0);
  loop invariant x >= 0;
  loop assigns x, y;
  */
  while(x < n) {
    x++;
    if(x > m) y++;
  }
  // @ assert y==n;
}
