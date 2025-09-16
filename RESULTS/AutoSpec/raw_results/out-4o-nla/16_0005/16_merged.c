/*@
requires k >= 0 && k <= 30;
*/
int main16(int k){
   
    int y=0;
    int x=0;
    int c=0;


    // loop body
    /*@
    loop invariant y == c;
    loop invariant x == y*y*y;
    loop invariant x == y*y*c/3 - y*y*y/6;
    loop invariant x == y*y*((y+1)/2);
    loop invariant x == y * y * (y + 1) / 2;
    loop invariant x == y * y * (c + 1) / 3;
    loop invariant x == y * y * (c + 1) / 2;
    loop invariant x == c*c*c;
    loop invariant x == (c * (c + 1) * (2 * c + 1)) / 6;
    loop invariant c <= k;
    loop invariant 0 <= c;
    loop assigns y;
    loop assigns x;
    loop assigns c;
    */
    while(c < k){
     c = c + 1;
     y = y + 1;
     x = y * y + x;
    }
    // @ assert 6*x-2*k*k*k-3*k*k-k == 0;
}
