
    #include "../verification_stdlib.h"
    #include "../verification_list.h"
    #include "../int_array_def.h"

    /*@ Extern Coq (Result: Assertion) */
    /*@ Extern Coq (Results: Z -> Assertion) */

        

int main11(int z,int k,int a)

            /*@
            Require z >= 0 && z <= 10 && k > 0 && k <= 10
            Ensure Results(__return)
            */
            {
  

    int x=a;
    int y=1;
    int c=1;
  
    while (c < k){
   c = c + 1;
   x = x*z + a;
   y = y*z;
    }
  
  
  }