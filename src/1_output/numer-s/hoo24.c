
    #include "../verification_stdlib.h"
    #include "../verification_list.h"
    #include "../int_array_def.h"

    /*@ Extern Coq (Result: Assertion) */
    /*@ Extern Coq (Results: Z -> Assertion) */

        

int hoo24(int n,int guess,int prev_guess) 

            /*@
            Require n > 0
            Ensure Results(__return)
            */
            {


    guess = n / 2;  
    prev_guess = 0; 

    while (guess != prev_guess) {
        prev_guess = guess;
        guess = (guess + n / guess) / 2;  
    }
    
    
}