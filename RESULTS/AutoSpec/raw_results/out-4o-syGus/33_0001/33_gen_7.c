/*@
requires n < 0;
*/
void foo(int n) {
  int x = n;
  // loop body
  /*@
  loop invariant x <= n;
  loop invariant x >= 0;
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
