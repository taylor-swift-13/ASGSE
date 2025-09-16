#include <assert.h>
int unknown1();
int unknown2();
int unknown3();
int unknown4();


/*
 * From "A Practical and Complete Approach to Predicate Refinement" by McMillan TACAS'06
 */

void foo(int i, int j) {
  
  int x = i;
  int y = j;
 
  /*@
  loop invariant x >= 0;
  loop invariant y == j - (i - x);
  loop invariant x == i - (j - y);
  loop assigns x, y;
  */
  while(x != 0) {
	  x--;
	  y--;
  }
  if(i==j) {
	  // @ assert y==0;
  }
}

