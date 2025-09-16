
    #include "../verification_stdlib.h"
    #include "../verification_list.h"
    #include "../int_array_def.h"

    /*@ Extern Coq (Result: Assertion) */
    /*@ Extern Coq (Results: Z -> Assertion) */

        


void reverse(int *a, int n) /*@
With a_l
Require store_int_array(a, n, a_l) && n > 0 && n < 100
Ensure emp
*/
{
    int i = 0;
    int j = n-1;

   
  /*@ Print user assertion at number LoopEntry_0*/ 
/*@ Inv
    exists  a_l,    
    store_int_array(a, n, a_l) && n > 0 && n < 100 &&
    ((0 < n@pre/2) => (0 <= i && i <= n@pre/2)) &&
(!(0 < n@pre/2) => ((j == n@pre - 1) && (i == 0) && (n == n@pre) && (a == a@pre))) &&
(n == n@pre) &&
(a == a@pre
      loop assigns i, j, a_l[0..n-1])
    */
    
    while (i < n/2) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}
void goo14() 
/*@

Require emp

Ensure emp
*/{
    int arr[5] = {1, 2, 3, 4, 5};
    reverse(arr, 5);
    
}