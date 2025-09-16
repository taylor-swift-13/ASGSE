/*@ requires x>0;
    requires y>0;
*/
int main3(int x,int y){
 
    int q=0;
    int r=0;
    
    /*@
    loop invariant x >= y * q + r;
    loop invariant 0 <= r < y;
    loop invariant q >= 0;
    loop invariant x == y * q + r + (y - r - 1);
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
  
