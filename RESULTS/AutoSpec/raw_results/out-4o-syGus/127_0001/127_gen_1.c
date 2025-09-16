void foo(int x, int y) {
  int i = x;
  int j = y;

  /*@
  loop invariant x >= 0;
  loop invariant y <= j;
  loop invariant x + y == i + j;
  loop invariant (x == 0) ==> (y == j - i);
  loop assigns x, y;
  */
  while (x != 0) {
    x  = x - 1;
    y  = y - 1;
  }
  // post-condition
  if (y != 0) {
    // @ assert i != j;
  }
}
