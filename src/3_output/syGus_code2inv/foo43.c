
/*@
    requires n > 0;
    */
    
void foo43(int n) {

    int c = 0;

    
            
        /*@
          loop invariant  ((c == 0)&&(n == \at(n,Pre))) || (c <= n + 1) || (c > n); // Modified to account for c > n
          loop invariant n == \at(n,Pre);
          loop assigns c;
            */
            while (unknown()) {
        {
          if (unknown()) {
            if ( c > n )
            {
            c  = c + 1;
            }
          } else {
            if (c == n) 
            {
            c  = 1;
            }
          }
    
        }
    
    }
             
           
    /*@ assert (c == n) ==> (n > - 1); */
    

  

}
