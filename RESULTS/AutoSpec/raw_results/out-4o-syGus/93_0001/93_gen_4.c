/*@
requires n >= 0;
*/
void foo(int n) {
  int i = 0;
  int x = 0;
  int y = 0;
    
  /*@
  loop invariant 0 <= i <= n;
  loop invariant (3 * i) == (x + y);
  loop assigns i, x, y;
  */
  while (i < n) {
    i = i + 1;
    if (unknown()) {
      x  = x + 1;
      y  = y + 2;
    } else {
      x  = x + 2;
      y  = y + 1;
    }
  }
  // post-condition
  // @ assert (3 * n) == (x + y);
}
