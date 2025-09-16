
void foo(int x2, int x3) {
    int d1 = 1;
    int d2 = 1;
    int d3 = 1;
    int x1 = 1;

    /*@
    loop invariant x1 <= 1;
    loop invariant d3 == 1;
    loop invariant d2 == 1;
    loop invariant d1 == d3;
    loop invariant d1 == d2;
    loop invariant d1 == 1;
    loop invariant 0 <= x1;
    loop invariant 0 < d3;
    loop invariant 0 < d2;
    loop invariant 0 < d1;
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
