/*@
  requires 0 <= x <= 10;
  requires 0 <= y <= 10;
*/
void foo(int x, int y) {
  // loop body
  while (unknown()) {
    x  = x + 10;
    y  = y + 10;
  }

}
