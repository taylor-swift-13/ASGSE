
/*@
    requires n > 0;
    */
    
void foo39(int n) {

    int c = 0;

    
            
        /* >>> LOOP INVARIANT TO FILL <<< */
        
            /*@
                loop invariant  ((c == 0) && (n == \at(n,Pre))) || (0 < c <= n);
                loop invariant n == \at(n,Pre);
                loop assigns c;
            */
            while (unknown()){
        
        if(c == n) {
            c = 1;
        }
        else {
            c = c + 1;
        }
    }
            
           
    /*@ assert  (c == n) ==> (c <= n); */


}
