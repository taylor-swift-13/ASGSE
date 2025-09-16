/*@
  requires 0 <= x <= 2;
  requires 0 <= y <= 2;
*/
void foo(int x, int y) {
  // loop body
  /*@
  loop invariant y <= 4;
  loop invariant y % 2 == 0;
  loop invariant x <= y + 2;
  loop invariant x <= 4;
  loop invariant x % 2 == y % 2;
  loop invariant x % 2 == 0;
  loop invariant 0 <= y;
  loop invariant 0 <= x;
  loop invariant (x - y) == (old(x) - old(y));
  loop invariant (x - y) % 2 == 0;
  loop assigns y;
  loop assigns x;
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
