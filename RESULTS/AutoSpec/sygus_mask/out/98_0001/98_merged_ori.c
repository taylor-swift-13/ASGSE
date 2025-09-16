void foo(int x) {
  int i = 0;
  int j = 0;
  int y = 2;

  /*@
  loop invariant y == 2;
  loop invariant j == 2 * i;
  loop invariant i == j / 2;
  loop invariant i <= x + 1;
  loop invariant i - j == -2;
  loop invariant 0 <= j;
  loop invariant 0 <= i;
  loop assigns j;
  loop assigns i;
  */
  while (i <= x) {
    i  = i + 1;
    j  = j + y;
  }

}
