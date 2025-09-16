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
  loop invariant x == y || x == y + 1;
  loop invariant w == 0 || w == 1;
  loop invariant z == 0 || z == 1;
  loop assigns w;
  loop assigns z;
  loop assigns x;
  loop assigns y;
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
