/*@
requires x == y;
*/
void foo(int x, int y) {
  int lock = 1;
  
  /*@
  loop invariant x == y;
  loop assigns x;
  loop assigns y;
  loop assigns lock;
  */
  while ((x != y)) {
      if (unknown()) {
        lock  = 1;
        x = y;
      } else {
        lock = 0;
        x = y;
        y = y + 1;
      }
  }

}
