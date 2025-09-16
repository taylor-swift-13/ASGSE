
/*@
requires A >= 0 && B >= 1;
*/
int main12(int A,int B){
    
   
    int q = 0;
    int r = 0;
    int t = A;
   
    
    /*@
    loop invariant t >= 0;
    loop invariant q == (A - t) / B;
    loop invariant r == (A - t) % B;
    loop invariant 0 <= r < B;
    loop assigns q, r, t;
    */
    while(t != 0) {
     if (r + 1 == B) {
          q = q + 1;
          r = 0;
          t = t - 1;
     }
     else {
          r = r + 1;
          t = t - 1;
     }
    }
    // @ assert q == A / B;
}