//svcomp_diamond_2-2

void hoo11(int y){
    int x = 0;

    //pre-condition
    
    //loop-body
    /*@
    loop assigns x;
    */
    while (x < 99) {
        if (y % 2 == 0) 
            x += 10;
        else 
            x -= 5;
    }

    //post-condition
}