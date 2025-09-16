
    #include "../verification_stdlib.h"
    #include "../verification_list.h"
    #include "../int_array_def.h"

    /*@ Extern Coq (Result: Assertion) */
    /*@ Extern Coq (Results: Z -> Assertion) */

        


void foo38(int n) 

            /*@
            Require n > 0
            Ensure Results(__return)
            */
            {

    int c = 0;

   
  /*@ Print user assertion at number LoopEntry_0*/ 
/*@ Inv
    ((n > 0) => (((c == 0) && (n == n@pre)) || (0 <= c && c <= n))) &&
((n@pre > 0) => (n == n@pre)
        loop assigns c)
    */
    
    while (unknown()) {
        if (c == n) {
            c = 1;
        } else {
            c = c + 1;
        }
    }
           

}