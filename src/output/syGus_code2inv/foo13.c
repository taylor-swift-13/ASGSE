
/*@
    requires x >= 0 && x <= 2 && y <= 2 && y >= 0;
    */
    
void foo13(int x,int y,int z1,int z2,int z3) {

    /* >>> LOOP INVARIANT TO FILL <<< */
        
    /*@
      loop invariant (x == \at(x, Pre) + 2 * ((x - \at(x, Pre)) / 2));
      loop invariant (y == \at(y, Pre) + 2 * ((y - \at(y, Pre)) / 2));
      loop invariant (y >= \at(y, Pre) + 2 * ((x - \at(x, Pre)) / 2));
      loop invariant z3 == \at(z3,Pre);
      loop invariant z2 == \at(z2,Pre);
      loop invariant z1 == \at(z1,Pre);
      loop assigns x, y;
    */
    while (unknown()) {
        x  = x + 2;
        y  = y + 2;
    }
  
    /*@ assert (x == 4) ==> (y != 0);  */
}
