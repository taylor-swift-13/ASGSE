/*@
requires size >= 1;
*/
void foo(int size) {
  int i = 1;
  int sn = 0;
  
  /*@
  loop invariant 1 <= i <= size + 1;
  loop invariant sn == i - 1;
  loop invariant 0 <= sn <= size;
  loop assigns i;
  loop assigns sn;
  */
  while (i <= size) {
    i = i + 1;
    sn = sn + 1;
  }
  // post-condition
  if (sn != size) {
    // @ assert sn == 0;
  }
}
