
    #include "../verification_stdlib.h"
    #include "../verification_list.h"
    #include "../int_array_def.h"

    /*@ Extern Coq (Result: Assertion) */
    /*@ Extern Coq (Results: Z -> Assertion) */

        

int main15(int k)

            /*@
            Require k >= 0 && k <= 30
            Ensure Results(__return)
            */
            {
   
    int y=0;
    int x=0;
    int c=0;
  

    // loop body
   
  /*@ Print user assertion at number LoopEntry_0*/ 
/*@ Inv
    ((0 < k@pre) => (y == c)) &&
((0 < k@pre) => (x == (c * (c + 1)) / 2)) &&
((0 < k@pre) => (0 <= c && c <= k)) &&
((!(0 < k@pre)) => ((c == 0)&&(x == 0)&&(y == 0)&&(k == k@pre))) &&
(k == k@pre
          loop assigns c, y, x)
    */
    
            while(c < k){
     c = c + 1;
     y = y + 1;
     x = y + x;
    }

    
}