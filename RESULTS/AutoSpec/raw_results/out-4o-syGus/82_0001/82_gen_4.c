/*@
requires x >= 0;
requires y >= 0;
requires x >= y;
*/
void foo(int x, int y) {
  int i = 0;
  
  /*@
  loop invariant 0 <= i <= y;
  loop invariant i >= 0;
  loop invariant i <= y;
  loop assigns i;
  */
  while (unknown()) {
    if (i < y)
    {
      i = i + 1;
    }
  }
  // post-condition
  if (i >= x) {
    if (0 > i) {
      // @ assert i >= y;
    }
  }
}
