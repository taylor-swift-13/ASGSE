#include <assert.h>
/*@
ensures \result >= 0;
*/
int unknown1();
int unknown2();
int unknown3();
int unknown4();

/*
 * Adapted from "Automated Error Diagnosis Using Abductive Inference" by Dillig et al.
 */
/*@
requires n > 0;
*/
void foo(int n, int flag) {
  int k = 1;
  if (flag) {
    k = unknown1();
  }
  int i = 0, j = 0;
  /*@
  loop invariant j == i * (i - 1) / 2;
  loop invariant j == i * (i + 1) / 2;
  loop invariant j == (i * (i - 1)) / 2; // Sum of first i natural numbers;
  loop invariant j == (i * (i + 1)) / 2;
  loop invariant i <= n + 1;
  loop invariant \forall integer k; 0 <= k < i ==> j == (k * (k + 1)) / 2;
  loop invariant 1 <= k;
  loop invariant 0 <= i;
  loop assigns j;
  loop assigns i;
  */
  while (i <= n) {
    i++;
    j += i;
  }
  int z = k + i + j;
  // @ assert z > 2 * n;
}