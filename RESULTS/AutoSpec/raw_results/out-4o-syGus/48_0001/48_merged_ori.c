int unknown();

/*@
requires n > 0;
*/
void foo(int n) {
  int c = 0;
  
  /*@
  loop invariant c >= 1 || c == 0;
  loop invariant c == n || c < n;
  loop invariant c <= n;
  loop invariant 0 <= c;
  loop invariant 0 < n;
  loop assigns c;
  */
  while (unknown()) {
      if(unknown()) {
        if(c != n) {
        (c = (c + 1));
        }
      } else {
        if (c == n) {
          c = 1;
        }
      }
  }
  // post-condition
  if(c == n) {
    // @ assert n > -1;
  }
}
