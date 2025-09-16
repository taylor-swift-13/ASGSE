
/*@
    requires x < y;
    requires y <= 20000001;
    */
    
int hoo17(int x,int y){
    

    //pre-condition
    //loop-body
    
            
        /* >>> LOOP INVARIANT TO FILL <<< */
        
            /*@
          loop invariant x <= y + 16;
          loop invariant (!(\at(x,Pre) < \at(y,Pre))) ==> ((y == \at(y,Pre))&&(x == \at(x,Pre)));
          loop assigns x, y;
            */
            while (x < y) {
        if (x < 0){
            x = x + 7; 
        }
        else {
            x = x + 10;
        }
        if (y < 0){
            y = y - 10;
        } 
        else {
            y = y + 3;
        }

    }
            

    //post-condition
    /*@ assert x <= y + 16; */
}
