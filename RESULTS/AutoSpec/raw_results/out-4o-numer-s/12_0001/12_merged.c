//svcomp_diamond_1-1
void hoo12(int y){

    //pre-condition
    int x = 0;
    
    //loop-body
    /*@
    loop invariant 0 <= x;
    loop assigns x;
    */
    while (x < 99) {
        if(y % 2 == 0){
            x = x + 2;
        } 
        else{
            x = x + 1;
        }
    }

    //post-condition
}