
    #include "../verification_stdlib.h"
    #include "../verification_list.h"
    #include "../int_array_def.h"

    /*@ Extern Coq (Result: Assertion) */
    /*@ Extern Coq (Results: Z -> Assertion) */

        


void foo72(int y) 

            /*@
            Require y >= 0 && y <= 127
            Ensure Results(__return)
            */
            {
  int c = 0;
  int z = 36 * y;
  



 
  /*@ Print user assertion at number LoopEntry_0*/ 
/*@ Inv
    (0 <= c && c <= 36) &&
(z == 36 * y@pre + c) &&
(y == y@pre
    loop assigns c, z)
    */
    
    while (unknown()) {

    if ( c < 36 )
    {
      z  = z + 1;
      c  = c + 1;
    }
  }

  
    


}