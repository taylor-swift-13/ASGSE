
    #include "../verification_stdlib.h"
    #include "../verification_list.h"
    #include "../int_array_def.h"

    /*@ Extern Coq (Result: Assertion) */
    /*@ Extern Coq (Results: Z -> Assertion) */

        

void foo85(int y,int z1,int z2,int z3) 

            /*@
            Require emp
            Ensure Results(__return)
            */
            {

    int x = -15000;
  
    
   
  /*@ Print user assertion at number LoopEntry_0*/ 
/*@ Inv
    (y >= y@pre // Weakened invariant for y) &&
(y > 0 || (x + 15000 <= 0) // Adjusted invariant to ensure validity under initial conditions) &&
(z3 == z3@pre) &&
(z2 == z2@pre) &&
(z1 == z1@pre
            loop assigns x, y)
    */
    
            while (x < 0) {
      
      x  = x + y;
      y  = y + 1;
      
  
    }
    
  
  }