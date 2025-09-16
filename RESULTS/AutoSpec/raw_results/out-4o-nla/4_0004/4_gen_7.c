/*@ requires x>0;
    requires y>0;
*/
int main4(int x,int y){
 
    int q=0;
    int r=0;
    
    /*@
    loop invariant 0 <= q;
    loop invariant 0 <= r < y;
    loop invariant x > y * q + r;
    loop invariant x == q * y + r + (x - (y * q + r));
    loop assigns q;
    loop assigns r;
    */
    while(x > y * q + r) {
        if (r == y - 1){
            r = 0;
            q += 1;
        }
        else{
            r += 1;
        }
  
    }
   
    //@ assert(x == q*y+r); 
}
