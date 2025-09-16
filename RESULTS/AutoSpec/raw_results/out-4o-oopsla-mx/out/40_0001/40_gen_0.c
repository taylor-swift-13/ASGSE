#include <assert.h>
int unknown1();
int unknown2();

/*@
requires flag > 0;
*/
void foo(int flag) {
  int i, j, k;
  j = 1;
  if (flag) {
    i = 0;
  } else {
    i = 1;
  }

  /*@
  loop invariant j > 0;
  loop invariant i % 2 == 0 || i % 2 == 1;
  loop invariant j >= i;
  loop assigns i, j;
  
  loop invariant a >= 0;
  loop invariant b == a * (j - i);
  loop assigns a, b;
  */
  while (unknown1()) {
    i += 2;
    if (i % 2 == 0) {
      j += 2;
    } else j++;
  }

  int a = 0;
  int b = 0;

  while (unknown2()) {
    a++;
    b += (j - i);
  }
  if (flag) {
    // @ assert a == b;
  }
}