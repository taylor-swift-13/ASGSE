void foo(int x, int y) {
  int i = x;
  int j = y;
  
  /*@
  loop invariant x >= 0;
  loop invariant x + y == i + j;
  loop invariant x <= i;
  loop invariant y <= j;
  loop assigns x, y;
  */
  while (x != 0) {
    x  = x - 1;
    y  = y - 1;
  }
  
  // post-condition
  if(i == j) {
    // @ assert y == 0;
  }
}
