//svcomp_eq2
/*@
  requires x > 0;
  requires y > 0;
  requires z > 0;
  requires w > 0;
*/
int hoo6(int a,int w,int x,int y,int z) {

    //pre-condition
    x = w;
    z = x + 1;
    y = w + 1;


    //loop-body
    while (unknown()) {
        y = y + 1;
        z = z + 1;
    }

    //post-conditon
    /*@ assert y == z; */
}