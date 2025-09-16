/*@
requires n >= 0;
*/
void foo(int n) {
  int x = 0;

  /*@
  loop invariant 0 <= x <= n;
  loop invariant x <= n;
  loop assigns x;
  */
  while (x < n) {
    x  = x + 1;
  }
  // post-condition
  // @ assert x == n;
}
