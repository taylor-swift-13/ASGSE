
    #include "../verification_stdlib.h"
    #include "../verification_list.h"
    #include "../int_array_def.h"

    /*@ Extern Coq (Result: Assertion) */
    /*@ Extern Coq (Results: Z -> Assertion) */

        

void foo107(int m,int j,int a) 

            /*@
            Require a <= m
            Ensure Results(__return)
            */
            {

    int k = 0;
    
    
    while ( k < 1) {

        if(m < a) {
            m = a;
        }
        
        k = k + 1;
    }

  

}