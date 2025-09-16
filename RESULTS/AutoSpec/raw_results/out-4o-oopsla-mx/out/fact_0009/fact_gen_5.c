#include <stdio.h>

int factorial(int n) {

  int i = 1;
  int f = 1;

  /*@
  loop invariant f == (i-1)!;
  loop invariant 1 <= i <= n + 1;
  loop invariant f >= 1;
  loop invariant \forall integer k; 1 <= k < i ==> f % k == 0;
  loop invariant 1 <= i;
  loop assigns i;
  loop assigns f;
  */
  while (i <= n)  {
    f = f * i;
    i = i + 1;
  }
  return f;
}

// write a test
void main() {
  int t = factorial(5);
  // @ assert t == 120;
}