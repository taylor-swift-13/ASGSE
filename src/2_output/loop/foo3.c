
    #include "../verification_stdlib.h"
    #include "../verification_list.h"
    #include "../int_array_def.h"

    /*@ Extern Coq (Result: Assertion) */
    /*@ Extern Coq (Results: Z -> Assertion) */

        

void foo3(int v1, int v2 ,int v3,int size, int y, int z)


            /*@
            Require emp
            Ensure Results(__return)
            */
            {
    
    int x = 0;

   
  /*@ Print user assertion at number LoopEntry_0*/ 
/*@ Inv
    ((0 < size@pre) => (((x == 0)&&(z == z@pre)&&(y == y@pre)&&(size == size@pre)&&(v3 == v3@pre)&&(v2 == v2@pre)&&(v1 == v1@pre)) || (y <= y@pre && y <= z))) &&
((0 < size@pre) => (0 <= x && x <= size)) &&
((!(0 < size@pre)) => ((x == 0)&&(z == z@pre)&&(y == y@pre)&&(size == size@pre)&&(v3 == v3@pre)&&(v2 == v2@pre)&&(v1 == v1@pre))) &&
(z == z@pre) &&
(size == size@pre) &&
(v3 == v3@pre) &&
(v2 == v2@pre) &&
(v1 == v1@pre
      loop assigns x, y
      loop variant size - x)
    */
    
    while(x < size) {
        x += 1;
        if(z <= y) {
            y = z;
        }
    }

    

}