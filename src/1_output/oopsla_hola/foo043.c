
    #include "../verification_stdlib.h"
    #include "../verification_list.h"
    #include "../int_array_def.h"

    /*@ Extern Coq (Result: Assertion) */
    /*@ Extern Coq (Results: Z -> Assertion) */

        


void foo043(int x, int y) 

            /*@
            Require x != y
            Ensure Results(__return)
            */
            {
  int i=0;
  int t=y;
   
  

  while (unknown()){
    if (x > 0)   
      y = y + x;
  }
   
  
 
}