#include <assert.h>
int unknown1();
int unknown2();
int unknown3();
int unknown4();

/*
 * Taken from Gulwani PLDI'08:
 * Program Analysis as Constraint Solving
 */

void main() {
  int x, y;

  x = -50;
  /*@
  loop invariant x < 0 ==> y > -50;
  loop invariant x < 0 ==> x < y * (y - 1) / 2 - 50;
  loop invariant x >= 0 ==> y > 0;
  loop invariant x + 50 < y * (y - 1) / 2;
  loop invariant x < 0 ==> x < 0;
  loop assigns x, y;
  */
  while( x < 0 ) {
	x = x + y;
	y++;
  }
  // @ assert y > 0;
}

