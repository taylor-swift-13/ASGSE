/*@
  requires A >= 1;
  requires (R-1)*(R-1) < A;
  requires A <= R*R;
  requires A%2 ==1;
*/
void hoo31(int A, int R) { 
    int u,v,r;
  
    //pre-condition
    u=2*R+1;
    v=1;
    r=R*R-A; 
  
    //loop-body
    /*@
    loop invariant v % 2 == 1;
    loop invariant u % 2 == 1;
    loop invariant 4*(A+r) == u*u-v*v-2*u+2*v;
    loop invariant 1 <= v;
    loop invariant 1 <= u;
    loop invariant 0 <= r;
    loop assigns v;
    loop assigns r;
    */
    while(r>0) {
      r=r-v;
      v=v+2;
    }
  
    //post-condition
    /*@ assert 4*(A+r) == u*u-v*v-2*u+2*v; */
  }   