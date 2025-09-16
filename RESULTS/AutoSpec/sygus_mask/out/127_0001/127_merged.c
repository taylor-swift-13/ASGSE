void foo(int x, int y) {
  int i = x;
  int j = y;

  /*@
  loop invariant x <= i;
  loop invariant i - x == j - y;
  loop assigns y;
  loop assigns x;
  loop assigns j;
  loop assigns i;
  */
  while (x != 0) {
    x  = x - 1;
    y  = y - 1;
  }

}
