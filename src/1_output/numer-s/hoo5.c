
    #include "../verification_stdlib.h"
    #include "../verification_list.h"
    #include "../int_array_def.h"

    /*@ Extern Coq (Result: Assertion) */
    /*@ Extern Coq (Results: Z -> Assertion) */

        


int hoo5(int a,int w,int x,int y,int z) 

            /*@
            Require x > 0 && y > 0 && z > 0 && w > 0
            Ensure Results(__return)
            */
            {
    //pre-condition
    x = w;
    z = y;
 
    while(unknown()) {
        if (unknown()) {
            w = w + 1; 
            x = x + 1;
        } 
        else {
            y = y - 1; 
            z = z - 1;
        }
    }

    //post-condition
    
}