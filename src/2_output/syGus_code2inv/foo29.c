
    #include "../verification_stdlib.h"
    #include "../verification_list.h"
    #include "../int_array_def.h"

    /*@ Extern Coq (Result: Assertion) */
    /*@ Extern Coq (Results: Z -> Assertion) */

        

void foo29(int n) 

            /*@
            Require emp
            Ensure Results(__return)
            */
            {

    int x = n;
    
    
   
  /*@ Print user assertion at number LoopEntry_0*/ 
/*@ Inv
    ((n@pre > 0) => (x == n@pre - (n@pre - x))) &&
((n@pre > 0) => (x >= 0)) &&
((!(n@pre > 0)) => ((x == n@pre)&&(n == n@pre))) &&
(n == n@pre
          loop assigns x)
    */
    
            while (x > 0) {
                x = x - 1;
            }
  
   
  }