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
  
  /*@
  loop invariant y == i / 2;
  loop invariant x == i;
  loop invariant i <= n;
  loop invariant i % 2 == y % 2;
  loop invariant i % 2 == x % 2;
  loop invariant i % 2 == 0 ==> x == 2 * y;
  loop invariant 0 <= i;
  loop assigns y;
  loop assigns x;
  loop assigns i;
  */
  while(i<n) {
    i++;
    x++;
    if(i%2 == 0) y++;
  }
  
  if(i%2 == 0) {
    // @ assert x==2*y;
  }
}

