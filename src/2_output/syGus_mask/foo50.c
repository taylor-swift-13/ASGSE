
    #include "../verification_stdlib.h"
    #include "../verification_list.h"
    #include "../int_array_def.h"

    /*@ Extern Coq (Result: Assertion) */
    /*@ Extern Coq (Results: Z -> Assertion) */

        


void foo50() 

            /*@
            Require emp
            Ensure Results(__return)
            */
            {

    int c = 0;

   
  /*@ Print user assertion at number LoopEntry_0*/ 
/*@ Inv
    (((c == 0)) || (c == 1) || (c == 2) || (c == 3) || (c == 4)
      loop assigns c)
    */
    
    while (unknown()) {
        {
            if (unknown()) {
                if (c != 4) {
                    c = c + 1;
                }
            } else {
                if (c == 4) {
                    c = 1;
                }
            }
        }
    } 
           
    

  

}