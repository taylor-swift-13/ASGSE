
/*@
    requires x > 0;
    requires y > 0;
    requires z > 0;
    requires w > 0;
    */
    
int hoo4(int a,int w,int x,int y,int z) {

    //pre-condition
    x = w;
    z = y;
   
    /*@
      loop invariant w == x;
      loop invariant z == y;
      loop invariant x == w;
      loop assigns w, x, y, z;
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
    /*@ assert w == x; */
}
