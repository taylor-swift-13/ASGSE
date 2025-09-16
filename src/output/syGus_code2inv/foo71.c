
/*@
    requires 0 <= y && y <= 127;
    */
    
void foo71(int y) {
    int c = 0;
    int z = 36 * y;
    
  
  
  
    
            
        /* >>> LOOP INVARIANT TO FILL <<< */
        
            /*@
            loop invariant 0 <= c <= 36;
            loop invariant z == 36 * y + c;
            loop invariant y == \at(y, Pre);
            loop assigns c, z;
            */
            while (unknown()) {

      if ( c < 36 )
      {
      z  = z + 1;
      c  = c + 1;
      }
      
    }
            

    /*@ assert  ( c < 36 ) ==> ( z < 4608 ) ; */
  
  
  
  }
