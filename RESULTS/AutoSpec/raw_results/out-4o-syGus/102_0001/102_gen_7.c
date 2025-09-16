/*@
requires n >= 0;
*/
void foo(int n) {
  int x = 0;
  
  /*@
  loop invariant 0 <= x <= n;
  loop invariant \forall integer k; 0 <= k < x ==> k < n;
  loop assigns x;
  */
  while (x < n) {
    x  = x + 1;
  }
  // post-condition
  if(n >= 0) {
    // @ assert x == n;
  }
}
