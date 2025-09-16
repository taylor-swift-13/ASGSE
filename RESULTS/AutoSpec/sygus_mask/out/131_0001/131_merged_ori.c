
void foo(int x2, int x3) {
    int d1 = 1;
    int d2 = 1;
    int d3 = 1;
    int x1 = 1;

    /*@
    loop invariant x3 == x3_initial - (d3 * (count of iterations));
    loop invariant x3 <= initial_x3;
    loop invariant x3 + d3 * (1 - (x3 > 0)) == x3_initial;
    loop invariant x2 == x2_initial - (d2 * (count of iterations));
    loop invariant x2 <= initial_x2;
    loop invariant x2 + d2 * (1 - (x2 > 0)) == x2_initial;
    loop invariant x1 > 0 ==> x2 > 0 ==> x3 > 0;
    loop invariant x1 == 1 - (d1 * (n - k)); // where n is the initial value of x1 and k is the number of iterations;
    loop invariant x1 == 1 - (d1 * (count of iterations));
    loop invariant x1 + d1 * (1 - (x1 > 0)) == 1;
    loop invariant d3 == 1;
    loop invariant d2 == 1;
    loop invariant d1 == 1;
    loop invariant \forall integer k; 1 <= k <= x1 + d1 ==> x2 > 0 ==> x3 > 0 ==> x1 + (d1 * (x1 + d1) - k) >= 0;
    loop invariant 0)) < x3 + d3 * (1 - (x3;
    loop invariant 0)) < x2 + d2 * (1 - (x2;
    loop invariant 0)) < x1 + d1 * (1 - (x1;
    loop invariant 0 <= x3;
    loop invariant 0 <= x2;
    loop invariant 0 <= x1;
    loop invariant 0 <= 0));
    loop assigns x3;
    loop assigns x2;
    loop assigns x1;
    */
    while(x1 > 0) {
        if(x2 > 0) {
            if(x3 > 0) {
                x1 = x1 - d1;
                x2 = x2 - d2;
                x3 = x3 - d3;
            }
        }
    }

}
