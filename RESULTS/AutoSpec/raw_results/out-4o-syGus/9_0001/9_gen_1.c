/*@
  requires 0 <= x <= 2;
  requires 0 <= y <= 2;
*/
void foo(int x, int y) {
  // loop body
  /*@
  loop invariant 0 <= x <= 2 + 2 * \at(unknown(), Pre);
  loop invariant 0 <= y <= 2 + 2 * \at(unknown(), Pre);
  loop invariant x % 2 == 0;
  loop invariant y % 2 == 0;
  loop assigns x, y;
  */
  while (unknown()) {
    x  = x + 2;
    y  = y + 2;
  }
  // post-condition
  if (x == 4) {
    // @ assert y != 0;
  }
}
