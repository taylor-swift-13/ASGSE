int unknown();

/*@
requires n > 0;
*/
void foo(int n) {
  int c = 0;

  /*@
  loop invariant c >= 0;
  loop invariant c <= n + 1;
  loop invariant \forall integer m; m > n ==> c != m;
  loop invariant n > 0;
  loop assigns c;
  */
  while (unknown()) {
    if (unknown()) {
      if (c > n) {
        c = c + 1;
      }
    } else {
      if (c == n) {
        c = 1;
      }
    }
  }
  // post-condition
  if (n <= -1) {
    // @ assert c != n;
  }
}
