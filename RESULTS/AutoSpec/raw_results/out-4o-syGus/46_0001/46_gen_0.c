int unknown();

/*@
requires n > 0;
*/
void foo(int n) {
  int c = 0;
  
  /*@
  loop invariant 0 <= c <= n;
  loop invariant c == n ==> \exists integer k; 0 <= k < n && c == k;
  loop invariant c != n ==> c <= n;
  loop assigns c;
  */
  while (unknown()) {
    if (unknown()) {
      if (c != n) {
        c = c + 1;
      }
    } else {
      if (c == n) {
        c = 1;
      }
    }
  }
  // post-condition
  if(c != n) {
    // @ assert c <= n;
  }
}
