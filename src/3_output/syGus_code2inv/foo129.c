
void foo129(int y,int z1,int z2,int z3) {

    int x = 1;
    
    /* >>> LOOP INVARIANT TO FILL <<< */
    
    /*@
      loop invariant (1 < \at(y,Pre)) ==> (x >= 1); // x is always greater than or equal to 1
      loop invariant (!(1 < \at(y,Pre))) ==> ((x == 1)&&(z3 == \at(z3,Pre))&&(z2 == \at(z2,Pre))&&(z1 == \at(z1,Pre))&&(y == \at(y,Pre)));
      loop invariant z3 == \at(z3,Pre);
      loop invariant z2 == \at(z2,Pre);
      loop invariant z1 == \at(z1,Pre);
      loop invariant y == \at(y,Pre);
      loop assigns x; // x is the only variable modified in the loop
    */
    while (x < y) {
        x = x + x;
    }
    
    /*@ assert x >= 1;*/
}
