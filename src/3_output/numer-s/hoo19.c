
int hoo19(){
    int x = 0;
    int y = 500000;

    //loop-body
    
            
        /* >>> LOOP INVARIANT TO FILL <<< */
        
            /*@
              loop invariant 0 <= x <= 1000000;
              loop invariant y == 500000 + (x > 500000 ? (x - 500000) : 0);
              loop assigns x, y;
            */
            while(x < 1000000) {
                if (x < 500000) {
                    x = x + 1;
                } 
                else {
                    x = x + 1;
                    y = y + 1;
                }
            }
            

    //post-condition
    /*@ assert y == x; */
}
