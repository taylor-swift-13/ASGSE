
    #include "../verification_stdlib.h"
    #include "../verification_list.h"
    #include "../int_array_def.h"

    /*@ Extern Coq (Result: Assertion) */
    /*@ Extern Coq (Results: Z -> Assertion) */

        

f

void foo108(int m,int j,int a,int c) 

            /*@
            Require a <= m
            Ensure Results(__return)
            */
            {

    int k = 0;
    
    
   
  /*@ Print user assertion at number LoopEntry_0*/ 
/*@ Inv
    (0 <= k) &&
(m >= a
        loop assigns k, m)
    */
    
    while ( k < c) {

        if(m < a) {
            m = a;
        }
        
        k = k + 1;
    }

  

}