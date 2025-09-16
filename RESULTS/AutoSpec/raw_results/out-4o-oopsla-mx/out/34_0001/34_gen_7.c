#include <assert.h>
int unknown1();
int unknown2();
int unknown3();
int unknown4();

void foo(int n)
{
  int x=0;
  int y=0;
  int i=0;
  int m=10;
  
  /*@
  loop invariant 0 <= i <= n;
  loop invariant x == i;
  loop invariant y == i / 2;
  loop invariant i % 2 == 0 ==> x == 2 * y;
  loop assigns i, x, y;
  */
  while(i < n) {
    i++;
    x++;
    if(i%2 == 0) y++;
  }
  
  if(i == m) {
    // @ assert x == 2*y;
  }
}

