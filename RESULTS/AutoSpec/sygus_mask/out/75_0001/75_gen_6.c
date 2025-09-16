/*@
requires y >= 127;
*/
void foo(int y) {
  int c = 0;
  int z = 36 * y;
  
  /*@
  loop invariant c >= 0;
  loop invariant c <= 36;
  loop invariant z == 36 * y + c;
  loop assigns z;
  loop assigns c;
  */
  while (unknown()) {
    if (c < 36)
    {
      z = z + 1;
      c = c + 1;
    }
  }

}
