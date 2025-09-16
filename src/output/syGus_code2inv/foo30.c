
void foo30() {
    int x = 100;
    
    /* >>> LOOP INVARIANT TO FILL <<< */
    
    /*@
      loop invariant x >= 0 && x <= 100;
      loop assigns x;
    */
    while (x > 0) {
        x = x - 1;
    }
    
    /*@ assert x == 0; */
}
