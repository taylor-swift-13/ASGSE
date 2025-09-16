
#include <limits.h>

/*@
requires INT_MIN < n0 && n0 < INT_MAX;
requires INT_MIN < n1 && n1 < INT_MAX;
*/
void foo0011(int n0, int n1) {
 
  int i0 = 0;
  int k = 0;
 

  /*@
  loop invariant 0 <= i0 <= n0;
  loop invariant k == i0;
  loop invariant k >= 0;
  loop assigns i0;
  loop assigns k;
  */
  while( i0 < n0 ) {
    i0++;
    k++;
  }

  int i1 = 0;
 
  while( i1 < n1 ) {
    i1++;
    k++;
  }

  int j1 = 0;
  
  
  while( j1 < n0 + n1 ) {
    // @ assert k>0;*/
    j1++;
    k--;
  }
}
