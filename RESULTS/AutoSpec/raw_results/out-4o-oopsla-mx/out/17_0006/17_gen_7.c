#include <assert.h>
int unknown1();
int unknown2();
int unknown3();
int unknown4();

void foo(int n)
{
 int k=1;
 int i=1;
 int j=0;
 /*@
 loop invariant 1 <= i <= n;
 loop invariant 1 <= k;
 loop invariant j == 0;
 loop invariant \forall integer m; 1 <= m < i ==> k >= m;
 loop assigns i;
 loop assigns k;
 */
 while(i < n) {
  j = 0;
  /*@
  loop invariant j == 0;
  loop invariant j <= i;
  loop invariant i <= n;
  loop invariant i <= k;
  loop invariant \forall integer m; 1 <= m < i ==> k >= m;
  loop invariant 1 <= k;
  loop invariant 0 <= j;
  loop invariant 0 <= i;
  loop assigns k;
  loop assigns j;
  */
  while(j < i) {
      k += (i-j);
      j++;
  }
  i++;
 }
 // @ assert k >= n;
 
}
