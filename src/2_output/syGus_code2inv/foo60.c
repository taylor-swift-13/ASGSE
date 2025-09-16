
    #include "../verification_stdlib.h"
    #include "../verification_list.h"
    #include "../int_array_def.h"

    /*@ Extern Coq (Result: Assertion) */
    /*@ Extern Coq (Results: Z -> Assertion) */

        


void foo60(int n,int v1,int v2,int v3) 

            /*@
            Require n > 0
            Ensure Results(__return)
            */
            {

    int c = 0;

   
  /*@ Print user assertion at number LoopEntry_0*/ 
/*@ Inv
    ((n@pre > 0) => (((c == 0) && (v3 == v3@pre) && (v2 == v2@pre) && (v1 == v1@pre) && (n == n@pre)) || (c >= 0 && c <= n))) &&
((n@pre > 0) => (v3 == v3@pre)) &&
((n@pre > 0) => (v2 == v2@pre)) &&
((n@pre > 0) => (v1 == v1@pre)) &&
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
            if (c == n) {
              c = 1;
            }
          }
    
        }
    
    }
         
    

}