void foo(int n) {
  int x = 0;
  
  /*@
  loop invariant x <= n;
  loop invariant x >= 0;
  loop invariant n >= 0 ==> x <= n;
  loop invariant x <= n && 0 <= x;
  loop invariant x == \min(n, \old(x) + n);
  loop invariant 0 <= x;
  loop assigns x;
  */
  while (x < n) {
    x = x + 1;
  }
  // post-condition
  if (x != n) {
    // @ assert n < 0;
  }
}
