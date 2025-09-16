/*@
  requires a >= 1;
  requires b >= 1;
*/
void hoo28(int a,int b) { 
    int x,y,u,v;
  
    //pre-condition
    x=a;
    y=b;
    u=b;
    v=0;
    
  
    //loop-body
    /*@
    loop invariant x >= 0;
    loop invariant y >= 1;
    loop invariant v == (a - x) * b / y;
    loop invariant x * u + y * v == a * b;
    loop assigns x, v;
    */
    while(x>y) {
      x=x-y;
      v=v+u;
    }
  
    //post-condition
    /*@ assert x*u + y*v == a*b; */
  }   