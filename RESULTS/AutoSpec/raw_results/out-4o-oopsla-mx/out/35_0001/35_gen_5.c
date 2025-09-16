#include <assert.h>
int unknown1();
int unknown2();
int unknown3();
int unknown4();

/*
 * InvGen, CAV'09 paper, fig 2
 */
/*@
requires n > 0;
*/
void foo(int n) {
  int x= 0;
  /*@
  loop invariant 0 <= x <= n;
  loop invariant x >= 0;
  loop invariant n > 0;
  loop assigns x;
  */
  while(x<n) {
    x++;
  } 
  if(n>0) {
    // @ assert x==n;
  }
}
