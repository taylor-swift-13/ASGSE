/*@
requires k >= 0 && k <= 30;
*/
int main16(int k){
   
    int y=0;
    int x=0;
    int c=0;


    // loop body
    /*@
    loop invariant 0 <= c <= k;
    loop invariant y == c;
    loop invariant x == y * y * (c + 1) / 2;
    loop assigns c;
    loop assigns y;
    loop assigns x;
    */
    while(c < k){
     c = c + 1;
     y = y + 1;
     x = y * y + x;
    }
    // @ assert 6*x-2*k*k*k-3*k*k-k == 0;
}
