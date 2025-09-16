#include<assert.h>

int unknown1();
int unknown2();
int unknown3();
int unknown4();

/*@
requires (x + y) == k;
requires n > 0;
*/
void foo(int x, int y, int k, int j, int i, int n) {
  int m = 0;
  j = 0;
  /*@
  loop invariant 0 <= j <= n;
  loop invariant (x + y) == k;
  loop invariant 0 <= m < n || m == 0 || m == j - 1;
  loop assigns j, x, y, m;
  */
  while (j < n) {
    if (j == i) {
      x++;
      y--;
    } else {
      y++;
      x--;
    }
    if (unknown1())
      m = j;
    j++;
  }
  // @ assert (x + y) == k;
  
  if (n > 0) {
    // @ assert 0 <= m;
    // @ assert m < n;
  }

}