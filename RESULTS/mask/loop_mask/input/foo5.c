int unknown();
/*@ requires x >= 0 && x <= 10 && y <= 10 && y >= 0; */
void foo5(int x, int y) {
  
  
    while (unknown()) {
      
        x = x + 10;
        y = y + 10;
        
      
    }

    /* mask_1 */
    
  }