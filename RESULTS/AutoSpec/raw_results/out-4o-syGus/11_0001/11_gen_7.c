/*@
  requires 0 <= x <= 10;
  requires 0 <= y <= 10;
*/
void foo(int x, int y) {
  // loop body
  /*@
  loop invariant 0 <= x <= 10 + 10 * \at(\loop_count, Pre);
  loop invariant 0 <= y <= 10 + 10 * \at(\loop_count, Pre);
  loop invariant x % 10 == 0;
  loop invariant y % 10 == 0;
  loop assigns x, y;
  */
  while (unknown()) {
    x  = x + 10;
    y  = y + 10;
  }
  // post-condition
  if (x == 20) {
    // @ assert y != 0;
  }
}
