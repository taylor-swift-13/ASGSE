#include <assert.h>
int unknown1();
int unknown2();
int unknown3();
int unknown4();

/*
 * From "The Octagon Abstract Domain" HOSC 2006 by Mine.
 */

int main() {
  int a = 0;
  int j;
  int m;
  if(m<=0)
    return 0;
  /*@
  loop invariant 1 <= j <= m + 1;
  loop invariant -j <= a <= j - 1;
  loop invariant a >= -m;
  loop invariant a <= m;
  loop assigns j, a;
  */
  for(j = 1; j <= m ; j++){
    if(unknown1()) 
       a++;
    else
       a--; 
  }
  // @ assert a>=-m;
  // @ assert a<=m;
}
