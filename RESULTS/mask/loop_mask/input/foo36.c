int unknown();

int foo36(int y,int v1,int v2,int v3) {

    int lock = 1;
    int x = y;

    while (x != y) {
        if (unknown()) {
          
          lock  = 1;
          x  = y;
          
        } else {
          
          lock  = 0;
          x  = y;
          y  = y + 1;
          
        }
 
    }
    /* mask_1 */
  }