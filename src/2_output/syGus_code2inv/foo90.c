
    #include "../verification_stdlib.h"
    #include "../verification_list.h"
    #include "../int_array_def.h"

    /*@ Extern Coq (Result: Assertion) */
    /*@ Extern Coq (Results: Z -> Assertion) */

        


int foo90(int x,int v1,int v2,int v3) 

            /*@
            Require emp
            Ensure Results(__return)
            */
            {

    int lock = 1;
    int y = x + 1;

   
  /*@ Print user assertion at number LoopEntry_0*/ 
/*@ Inv
    (x <= y) &&
((lock == 1 || lock == 0)) &&
((lock == 1) => (x <= y)) &&
((x == y) => (lock == 1))
    */
    
            while (x != y) {
        if (unknown()) {
          
          lock  = 1;
          x  = y;
          
        } else {
          
          lock  = 0;
          x  = y;
          y  = y + 1;
          
        }
 
    }
    
  }