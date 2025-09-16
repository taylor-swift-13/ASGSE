
void foo92(int z1, int z2, int z3) {
    int x = 0;
    int y = 0;

    /* >>> LOOP INVARIANT TO FILL <<< */
    
    /*@
      loop invariant y == 0;
      loop invariant x == 0;
      loop invariant z3 == \at(z3, Pre);
      loop invariant z2 == \at(z2, Pre);
      loop invariant z1 == \at(z1, Pre);
      loop assigns y;
    */
    while(y >= 0) {
        y = y + x;
    }
}
