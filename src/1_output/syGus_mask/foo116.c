
    #include "../verification_stdlib.h"
    #include "../verification_list.h"
    #include "../int_array_def.h"

    /*@ Extern Coq (Result: Assertion) */
    /*@ Extern Coq (Results: Z -> Assertion) */

        


void foo116(int v1,int v2,int v3) 

            /*@
            Require emp
            Ensure Results(__return)
            */
            {

    int sn = 0;
    int x = 0;
    
    
    while (unknown()) {
  
      x  = (x + 1);
      sn  = (sn + 1);
      
    }
      
    
  
  }