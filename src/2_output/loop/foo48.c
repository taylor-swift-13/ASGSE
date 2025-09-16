
    #include "../verification_stdlib.h"
    #include "../verification_list.h"
    #include "../int_array_def.h"

    /*@ Extern Coq (Result: Assertion) */
    /*@ Extern Coq (Results: Z -> Assertion) */

        

void foo48(int x, int y,int z1,int z2,int z3) 

            /*@
            Require emp
            Ensure Results(__return)
            */
            {

    int i = x;
    int j = y;
    
    
   
  /*@ Print user assertion at number LoopEntry_0*/ 
/*@ Inv
    ((x@pre != 0) => (y == j - (i - x))) &&
((!(x@pre != 0)) => ((j == y@pre)&&(i == x@pre)&&(z3 == z3@pre)&&(z2 == z2@pre)&&(z1 == z1@pre)&&(y == y@pre)&&(x == x@pre))) &&
(j == y@pre) &&
(i == x@pre) &&
(z3 == z3@pre) &&
(z2 == z2@pre) &&
(z1 == z1@pre
          loop assigns x, y
          loop variant x)
    */
    
        while (x != 0) {
  
            x = x - 1;
            y = y - 1;
  
        }
  
    
  
  }