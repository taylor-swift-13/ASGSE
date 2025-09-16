#include <assert.h>
int unknown1();
int unknown2();
int unknown3();
int unknown4();

void main()
{


  int w = 1;
  int z = 0;
  int x = 0;
  int y = 0;

  while(unknown1()) {
	  
    /*@
    loop invariant z == x + y;
    loop invariant z == 2 * y;
    loop invariant x == y;
    loop invariant w == z + 1;
    loop invariant w == x + y + 1;
    loop invariant w % 2 == z % 2;
    loop invariant w % 2 == 1;
    loop invariant \forall integer k; 0 <= k <= w ==> (w % 2 == 1 ==> x == y);
    loop invariant 1 <= w;
    loop invariant 0 <= z;
    loop invariant 0 <= y;
    loop invariant 0 <= x;
    loop assigns y;
    loop assigns x;
    */
    while(unknown2()){
      if(w%2 == 1) x++;
      if(z%2 == 0) y++;
    }
    z = x + y;
    w = z + 1;
  }

  
  // @ assert x == y;
}
