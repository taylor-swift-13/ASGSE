/*@
requires k >= 0 && k <= 30;
*/
void main15(int k){
   
    int y=0;
    int x=0;
    int c=0;
  

    // loop body
    /*@
    loop invariant y == c;
    loop invariant c <= k;
    loop invariant 2*x == c*c + c;
    loop invariant 2*x == c*(c+1);
    loop invariant 0 <= c;
    loop assigns y;
    loop assigns x;
    loop assigns c;
    */
    while(c < k){
     c = c + 1;
     y = y + 1;
     x = y + x;
    }

    //@ assert 2 * x - k * k - k == 0;
}


