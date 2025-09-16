/*@
requires (x == 100);
*/
void foo(int x) { 
  // loop body
  /*@
  loop invariant 0 <= x <= 100;
  loop invariant x >= 0;
  loop assigns x;
  */
  while (x > 0) {
    x  = x - 1;
  }
  // post-condition
  // @ assert x == 0;
}
