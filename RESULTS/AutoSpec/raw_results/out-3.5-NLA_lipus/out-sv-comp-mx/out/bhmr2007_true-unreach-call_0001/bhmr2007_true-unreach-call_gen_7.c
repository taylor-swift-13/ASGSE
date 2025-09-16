// bhmr2007_true-unreach-call.c
// Source: Dirk Beyer, Thomas A. Henzinger, Rupak Majumdar, Andrey
// Rybalchenko: "Path Invariants", PLDI 2007.
int unknown1();

/*@ 
requires 0 <= n && n < 1000000;
*/
int foo(int n, int i, int a, int b) {
    i = 0; a = 0; b = 0;
    
    /*@
    loop invariant 0 <= i <= n;
    loop invariant a + b == 3 * i;
    loop invariant \exists integer k; 0 <= k <= i;
    loop invariant \forall integer k; 0 <= k <= n;
    loop assigns i, a, b;
    */
    while (i < n) {
        if (unknown1()) {
            a = a + 1;
            b = b + 2;
        } else {
            a = a + 2;
            b = b + 1;
        }
        i = i + 1;
    }

    // @ assert a + b == 3 * n;
    
    return 0;
}
