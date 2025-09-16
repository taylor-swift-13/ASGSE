int unknown();

/*@
requires n > 0;
*/
void foo(int n) {
  int c = 0;

  /*@
  loop invariant c >= 0;
  loop invariant c <= n + 1;
  loop invariant c != n ==> c >= 0;
  loop assigns c;
  */
  while (unknown()) {
    if (unknown()) {
      if (c > n) {
        c  = c + 1;
      }
    } else {
      if (c == n) {
        c  = 1;
      }
    }
  }
  // post-condition
  if ( (c != n) ) {
    // @ assert  (c >= 0) ;
  }
}
