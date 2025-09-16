
    #include "../verification_stdlib.h"
    #include "../verification_list.h"
    #include "../int_array_def.h"

    /*@ Extern Coq (Result: Assertion) */
    /*@ Extern Coq (Results: Z -> Assertion) */

        

int arraySearch4(int *a, int x, int n) 
/*@
With a_l
Require store_int_array(a, x, a_l) && x > 0 && x < 100
Ensure Results(__return)
*/{
    int p = 0;

   
  /*@ Print user assertion at number LoopEntry_0*/ 
/*@ Inv
    exists  a_l,    
    store_int_array(a, x, a_l) && x > 0 && x < 100 &&
    ((0 < n@pre) => (0 <= p && p <= n@pre)) &&
(!(0 < n@pre) => ((p == 0) && (n == n@pre) && (x == x@pre) && (a == a@pre))) &&
(n == n@pre) &&
(x == x@pre
            loop assigns p)
    */
    
            while (p < n) {
        if (a[p] == x) {
            return 1;
        }
        p++;
    }
    return 0;
}