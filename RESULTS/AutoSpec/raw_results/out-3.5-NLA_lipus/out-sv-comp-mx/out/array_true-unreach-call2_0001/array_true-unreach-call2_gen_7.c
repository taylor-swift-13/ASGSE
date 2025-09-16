#include "assert.h"

#define SZ 2048

int main(void) {
  int A[SZ];
  int B[SZ];
  int i;
  int tmp;

  /*@
  loop invariant 0 <= i <= SZ;
  loop invariant \forall integer k; 0 <= k < i ==> B[k] == A[k];
  loop assigns i;
  loop assigns tmp;
  loop assigns B[0..SZ-1];
  */
  for (i = 0; i < SZ; i++) {
    tmp = A[i];
    B[i] = tmp;
  }

  // @ assert A[SZ/2] == B[SZ/2];
}