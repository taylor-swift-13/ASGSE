void main() {
  // variable declarations
  int x;
  int y;
  // pre-conditions
  x = 1;
  y = 0;
  // loop body
  /*@
  loop invariant y >= 0;
  loop invariant x >= y;
  loop invariant y < 1001;
  loop invariant x >= 1;
  loop assigns x, y;
  */
  while (y < 1000) {
    x  = (x + y);
    y  = (y + 1);
  }
  // post-condition
  // @ assert x >= y >= 1;
}
