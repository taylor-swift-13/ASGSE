/*@
requires x == n;
requires x != 0;
*/
void foo(int x, int n) { 
  // loop body
  /*@
  loop invariant x >= 0;
  loop invariant x <= n;
  loop invariant x + (n - x) == n;
  loop assigns x;
  */
  while (x > 0) {
    x  = x - 1;
  }
  // post-condition
  if (x != 0) {
    // @ assert n < 0;
  }
}
