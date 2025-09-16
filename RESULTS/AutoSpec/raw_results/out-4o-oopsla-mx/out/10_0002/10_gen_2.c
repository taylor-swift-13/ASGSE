#include <assert.h>
int unknown1();
int unknown2();
int unknown3();
int unknown4();

void main() {


  int w = 1;
  int z = 0;
  int x = 0;
  int y = 0;

  /*@
  loop invariant x == y;
  loop invariant w == 0 || w == 1;
  loop invariant z == 0 || z == 1;
  loop invariant \forall integer k; 0 <= k <= y ==> k <= x;
  loop invariant \forall integer k; 0 <= k <= x ==> k <= y;
  loop invariant w + z <= 1;
  loop invariant w + x <= 1;
  loop invariant z == 1 || z == 0;
  loop invariant z == 0 || z == 1;
  loop invariant w == 1 || w == 0;
  loop invariant w == 0 || w == 1;
  loop invariant 0 <= y;
  loop invariant 0 <= x;
  loop invariant (z == 0) || (z == 1);
  loop invariant (z == 0 || z == 1);
  loop invariant (w == 1) || (w == 0);
  loop invariant (w == 0 || w == 1);
  loop assigns z;
  loop assigns y;
  loop assigns x;
  loop assigns w;
  */
  while(unknown2()){
  	if(w) {
  	  x++;
  	  w = !w;
	  }
	
    if(!z) {
      y++; 
      z=!z;
    }
  }

  // @ assert x==y;
  
}
