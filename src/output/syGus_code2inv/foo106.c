
/*@
    requires a <= m;
    requires j < 1;
    */
    
void foo106(int m, int j, int a) {

    int k = 0;
    
    /*@
      loop invariant  ((k == 0) && (a == \at(a,Pre)) && (j == \at(j,Pre)) && (m == \at(m,Pre))) || (m >= a);
      loop invariant a == \at(a,Pre);
      loop invariant j == \at(j,Pre);
      loop assigns m, k;
    */
    while (k < 1) {

        if (m < a) {
            m = a;
        }
        
        k = k + 1;
    }
            

    /*@ assert a <= m; */

}
