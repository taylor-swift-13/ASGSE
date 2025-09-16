
void foo26(int n) {

    int x = n;
    
    /*@
      loop invariant (\at(n,Pre) > 1) ==> (x >= 1);
      loop invariant (!(\at(n,Pre) > 1)) ==> ((x == \at(n,Pre)) && (n == \at(n,Pre)));
      loop invariant n == \at(n,Pre);
      loop assigns x;
    */
    while (x > 1) {
        x = x - 1;
    }
    
    /*@ assert (x != 1) ==> (n < 1); */
}
