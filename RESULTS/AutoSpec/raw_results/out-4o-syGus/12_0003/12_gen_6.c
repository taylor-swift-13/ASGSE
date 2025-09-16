/*@
  requires 0 <= x <= 10;
  requires 0 <= y <= 10;
*/
void foo(int x, int y) {
  // variable declarations
  int z1;
  int z2;
  int z3;

  // loop body
  /*@
  loop invariant 0 <= x <= 10 + 10 * (\at(x, Here) / 10);
  loop invariant 0 <= y <= 10 + 10 * (\at(y, Here) / 10);
  loop invariant (x - \at(x, Here)) % 10 == 0;
  loop invariant (y - \at(y, Here)) % 10 == 0;
  loop assigns x, y;
  */
  while (unknown()) {
    x  = x + 10;
    y  = y + 10;
  }
  // post-condition
  if (y == 0) {
    // @ assert x != 20;
  }
}
