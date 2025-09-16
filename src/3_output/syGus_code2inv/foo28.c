
void foo28(int n) {

    int x = n;
    
    /* >>> LOOP INVARIANT TO FILL <<< */
    
    /*@
      loop invariant (\at(n,Pre) > 0) ==> (x >= 0);
      loop invariant (!(\at(n,Pre) > 0)) ==> ((x == \at(n,Pre)) && (n == \at(n,Pre)));
      loop invariant n == \at(n,Pre);
      loop assigns x;
    */
    while (x > 0) {
        x = x - 1;
    }
  
   /*@ assert (x != 0) ==> (n < 0); */
}
