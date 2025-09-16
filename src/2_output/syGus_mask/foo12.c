
    #include "../verification_stdlib.h"
    #include "../verification_list.h"
    #include "../int_array_def.h"

    /*@ Extern Coq (Result: Assertion) */
    /*@ Extern Coq (Results: Z -> Assertion) */

        


void foo12(int x, int y,int z1,int z2,int z3) 

            /*@
            Require x >= 0 && x <= 10 && y <= 10 && y >= 0
            Ensure Results(__return)
            */
            {
  
  
   
  /*@ Print user assertion at number LoopEntry_0*/ 
/*@ Inv
    ((x@pre >= 0 && x@pre <= 10 && y@pre <= 10 && y@pre >= 0) => (x >= x@pre && (x - x@pre) % 10 == 0)) &&
((x@pre >= 0 && x@pre <= 10 && y@pre <= 10 && y@pre >= 0) => (y >= y@pre && (y - y@pre) % 10 == 0)) &&
((x@pre >= 0 && x@pre <= 10 && y@pre <= 10 && y@pre >= 0) => (z3 == z3@pre)) &&
((x@pre >= 0 && x@pre <= 10 && y@pre <= 10 && y@pre >= 0) => (z2 == z2@pre)) &&
((x@pre >= 0 && x@pre <= 10 && y@pre <= 10 && y@pre >= 0) => (z1 == z1@pre)
        loop assigns x, y)
    */
    
    while (unknown()) {
        x = x + 10;
        y = y + 10;
    }

  
   
  }