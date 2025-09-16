#include <assert.h>
int unknown1();
int unknown2();
int unknown3();
int unknown4();

/*
 * Based on ex16 from NECLA Static Analysis Benchmarks
 */

int foo(int x, int y)
{
  int i=0;
  int t=y;
   
  if (x==y) return x;
  
  /*@
  loop invariant y >= t;
  loop invariant x == y || x != y;
  loop invariant x > 0 ==> y >= t + i * x;
  loop invariant x <= 0 ==> y == t;
  loop assigns y;
  */
  while (unknown1()){
    if (x > 0)   
      y = y + x;
  }
   
  // @ assert y >= t;
  return 0;
}


