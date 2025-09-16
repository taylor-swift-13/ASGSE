void foo(int x) {
  int i = 0;
  int j = 0;
  int y = 0;
  
  /*@
  loop invariant y == 0 || y == 1;
  loop invariant j == y * (i - 1);
  loop invariant j == i * y;
  loop invariant j == (i - 1) * y;
  loop invariant 0 <= y;
  loop invariant 0 <= i;
  loop assigns j;
  loop assigns i;
  */
  while (i <= x) {
    i  = i + 1;
    j  = j + y;
  }
  // post-condition
  if (y == 1) {
    //@ assert i == j;
  }
}
