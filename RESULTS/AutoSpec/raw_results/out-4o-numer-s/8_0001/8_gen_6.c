//svcomp_mod4
int unknown();
void hoo8(){
    

    //pre-condition
    int x = 0;

    //loop-body
    /*@
    loop invariant x % 4 == 0;
    loop assigns x;
    */
    while(unknown()){
        x = x + 4;
    }

    //post-condition
    /*@ assert x % 4 == 0; */
    
}