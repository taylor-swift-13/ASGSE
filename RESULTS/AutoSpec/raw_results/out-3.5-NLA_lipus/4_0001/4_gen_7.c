/*@ requires x>0;
    requires y>0;
*/
void main4(int x,int y){
 
    int q=0;
    int r=0;
    
    /*@
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
