void foo103() {

    int x = 0 ;
    
    
    while (x < 100) {
      
      x  = (x + 1);
  
    }
   /*@ assert x == 100 ;*/
  }