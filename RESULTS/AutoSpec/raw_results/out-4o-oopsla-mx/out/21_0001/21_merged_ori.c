#include <assert.h>
int unknown1();
int unknown2();
int unknown3();
int unknown4();

/*
 * Based on "larg_const.c" from InvGen test suite  
 */
/*@
requires n > 0;
requires n < 10;
*/
void foo(int n) {
  int c1 = 4000;
  int c2 = 2000;
  int v;
  int i, k, j;
  k = 0;
  i = 0;
  /*@
  loop invariant n * c2; // Strengthening invariant to match the assertion <= k;
  loop invariant n * c2 <= k;
  loop invariant k > (i - 1) * c2 || i == 0;
  loop invariant k == i * c1 || k == (i - j) * c1 + j * c2;
  loop invariant k <= i * c1;
  loop invariant k % c1 == 0 || k % c1 == c2;
  loop invariant i <= n;
  loop invariant i < k;
  loop invariant i * c2 <= k;
  loop invariant i * c2 - c2 < k;
  loop invariant 0 <= i;
  loop invariant 0 < k;
  loop invariant (k - i * c2) % (c1 - c2) == 0;
  loop assigns v;
  loop assigns k;
  loop assigns i;
  */
  while( i < n ) {
    i++;
    if(unknown2() % 2 == 0) 
      v = 0;
    else v = 1;
    
    if( v == 0 )
      k += c1;
    else 
      k += c2;
  }
  
  // @ assert k > n;
}

