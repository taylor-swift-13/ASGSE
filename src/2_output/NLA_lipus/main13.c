
    #include "../verification_stdlib.h"
    #include "../verification_list.h"
    #include "../int_array_def.h"

    /*@ Extern Coq (Result: Assertion) */
    /*@ Extern Coq (Results: Z -> Assertion) */

        

int main13(int x,int y)

            /*@
            Require x >= 1 && y >= 1
            Ensure Results(__return)
            */
            {
   
    int a=x;
    int b=y;
    int p=1;
    int q=0;

    // loop body
   
  /*@ Print user assertion at number LoopEntry_0*/ 
/*@ Inv
    ((x@pre!=0 && y@pre!=0) => (q + a * b * p == x * y)) &&
((x@pre!=0 && y@pre!=0) => (a >= 0)) &&
((x@pre!=0 && y@pre!=0) => (b >= 0)) &&
((x@pre!=0 && y@pre!=0) => (p >= 1)) &&
((!(x@pre!=0 && y@pre!=0)) => ((q == 0)&&(p == 1)&&(b == y@pre)&&(a == x@pre)&&(y == y@pre)&&(x == x@pre))) &&
(y == y@pre) &&
(x == x@pre
          loop assigns a, b, p, q)
    */
    
            while(a!=0 && b!=0) {
     if (a % 2 ==0 && b % 2 ==0 ){
          a = a/2;
          b = b/2;
          p = 4*p;
     }
     else if (a % 2 ==1 && b % 2 ==0 ){
          a = a-1;
          q = q+b*p;
     }
     else if (a % 2 ==0 && b % 2 ==1 ){
          b = b-1;
          q = q+a*p;
     }
     else {
          a = a-1;
          b = b-1;
          q = q+(a+b+1)*p;
     }
    }
    
}