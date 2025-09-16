#include <assert.h>
int unknown1();
int unknown2();
int unknown3();
int unknown4();

/*
 * "nested5.c" from InvGen test suite
 */

void main() {
  int i,j,k,n;
  
  for (i=0;i<n;i++)
    for (j=i;j<n;j++)
      /*@
      loop invariant 0 <= i < n;
      loop invariant i <= j <= n;
      loop invariant j <= k <= n;
      loop invariant k >= i;
      loop assigns k;
      loop assigns j;
      loop assigns i;
      */
      for (k=j;k<n;k++){
	      // @ assert k>=i;
      }
}
