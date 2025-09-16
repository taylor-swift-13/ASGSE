/*@
requires a <= m;
*/
void foo(int a, int m) {
    int j = 0;
    int k = 0;

    /*@
    loop invariant 0 <= k <= 1;
    loop invariant k >= 0;
    loop invariant a <= m;
    loop assigns k;
    loop assigns m;
    */
    while ( k < 1) {
        if(m < a) {
            m = a;
        }
        k = k + 1;
    }

    //post-condition
    // @ assert a <= m;
}
