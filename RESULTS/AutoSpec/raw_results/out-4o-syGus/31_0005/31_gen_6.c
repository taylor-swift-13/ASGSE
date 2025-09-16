void foo(int n) {
  int x = n;
  // loop body
  /*@
  loop invariant x >= 1 || x < 1;
  loop invariant x <= n;
  loop invariant x >= n - (n - 1);
  loop assigns x;
  */
  while (x > 1) {
    x  = x - 1;
  }
  // post-condition
  if (x != 1) {
    // @ assert n < 0;
  }
}
