
void foo50() {

    int c = 0;

    
            
        /* >>> LOOP INVARIANT TO FILL <<< */
        
            /*@
          loop invariant  ((c == 0)) || (0 <= c <= 4);
          loop assigns c;
            */
            while (unknown()) {
        {
          if (unknown()) {
            if ( c != 4 )
            {
            c  = c + 1;
            }
          } else {
            if (c == 4) 
            {
            c  = 1;
            }
          }
    
        }
    
    }
             
           
    /*@ assert  (c != 4 ) ==> (c >= 0); */
    

  

}
