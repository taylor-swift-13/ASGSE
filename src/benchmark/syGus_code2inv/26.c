void foo26(int n) {

    int x = n;
    
    
    while (x > 1) {
      
       x  = x - 1;
  
    }
  
   /*@ assert (x != 1) ==> (n < 1); */
  }