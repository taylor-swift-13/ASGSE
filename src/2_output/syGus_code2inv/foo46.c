
    #include "../verification_stdlib.h"
    #include "../verification_list.h"
    #include "../int_array_def.h"

    /*@ Extern Coq (Result: Assertion) */
    /*@ Extern Coq (Results: Z -> Assertion) */

        


void foo46(int n) 

            /*@
            Require n > 0
            Ensure Results(__return)
            */
            {

    int c = 0;

   
  /*@ Print user assertion at number LoopEntry_0*/ 
/*@ Inv
    ((n@pre > 0) => (c != n => c <= n)) &&
((n@pre > 0) => (((c == 0) && (n == n@pre)) || (c >= 0 && c <= n))) &&
((n@pre > 0) => (n == n@pre)
          loop assigns c)
    */
    
            while (unknown()) {
        {
          if (unknown()) {
            if (c != n) {
                c = c + 1;
            }
          } else {
            if (c == n) 
            {
                c = 1;
            }
          }
    
        }
    
    }   
    
    

  

}