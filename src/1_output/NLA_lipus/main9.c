
    #include "../verification_stdlib.h"
    #include "../verification_list.h"
    #include "../int_array_def.h"

    /*@ Extern Coq (Result: Assertion) */
    /*@ Extern Coq (Results: Z -> Assertion) */

        

int main9(int z,int k)

            /*@
            Require z >= 0 && z <= 10 && k > 0 && k <= 10
            Ensure Results(__return)
            */
            {
  

  int x=1;
  int y=z;
  int c=1;

  while (c < k){
 c = c + 1;
 x = x*z + 1;
 y = y*z;
  }


}