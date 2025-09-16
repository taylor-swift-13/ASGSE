//svcomp_eq1
/*@
  requires x > 0;
  requires y > 0;
  requires z > 0;
  requires w > 0;
*/
void hoo5(int a,int w,int x,int y,int z) {
    //pre-condition
    x = w;
    z = y;
 
    /*@
    loop invariant z <= y;
    loop invariant y == z;
    loop invariant x > 0 && y > 0;
    loop invariant x == w;
    loop invariant w > 0 && z > 0;
    loop invariant w == x;
    loop invariant w <= x;
    loop invariant 0 < z;
    loop invariant 0 < y;
    loop invariant 0 < x;
    loop invariant 0 < w;
    loop assigns z;
    loop assigns y;
    loop assigns x;
    loop assigns w;
    */
    while(unknown()) {
        if (unknown()) {
            w = w + 1; 
            x = x + 1;
        } 
        else {
            y = y - 1; 
            z = z - 1;
        }
    }

    //post-condition
    /*@ assert y == z; */
}