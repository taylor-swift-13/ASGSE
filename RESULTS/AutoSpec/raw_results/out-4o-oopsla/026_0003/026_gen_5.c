
int unknown1();
int unknown2();
int unknown3();


void foo026() {
  int w = 1, z = 0, x = 0, y = 0;
 
  while (unknown1()) {
   
    /*@
    loop invariant x == y;
    loop invariant w == z + 1;
    loop invariant (w % 2 == 1 && z % 2 == 0) || (w % 2 == 0 && z % 2 == 1);
    loop assigns x;
    loop assigns y;
    loop assigns w;
    loop assigns z;
    */
    while (unknown2()) {
      if (w % 2 == 1)
        x++;
      if (z % 2 == 0)
        y++;
    }
   
    while (unknown3()) {
      z = x + y;
      w = z + 1;
    }
  }
  // @ assert x == y;*/
}