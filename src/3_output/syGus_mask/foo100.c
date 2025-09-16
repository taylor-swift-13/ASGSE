
/*@
    requires n>=0;
    */
    
void foo100(int n) {

    int x = n;
    int y = 0;
    
    /*@
        loop invariant  (\at(n, Pre) >= 0) ==> ((\at(n, Pre) > 0) ==> (x + y == \at(n, Pre))) ;
        loop invariant  (\at(n, Pre) >= 0) ==> ((\at(n, Pre) > 0) ==> (y == \at(n, Pre) - x)) ;
        loop invariant (\at(n, Pre) >= 0) ==> ((!(\at(n, Pre) > 0)) ==> ((y == 0)&&(x == \at(n, Pre))&&(n == \at(n, Pre))));
        loop invariant (\at(n, Pre) >= 0) ==> (n == \at(n, Pre));
        loop assigns x, y;
    */
    while (x > 0) {
        y = y + 1;
        x = x - 1;
    }
}
