#include <assert.h>

int unknown1();
int unknown2();
int unknown3();
int unknown4();

void main() {
  int w = 1, z = 0, x = 0, y = 0;
  while (unknown1()) {
    /*@
    loop invariant x == y;
    loop invariant w % 2 == 1 || w % 2 == 0;
    loop invariant z % 2 == 0 || z % 2 == 1;
    loop invariant 0 <= x;
    loop invariant 0 <= y;
    loop assigns x, y, z, w;
    */
    while (unknown2()) {
      if (w % 2 == 1)
        x++;
      if (z % 2 == 0)
        y++;
    }
    while (unknown4()) {
      z = x + y;
      w = z + 1;
    }
  }
  // @ assert x == y;
}