//svcomp_const
int unknown();
void hoo3() {
    //pre-condition
    int s = 0;

    //loop-body
    /*@
    */
    while(unknown()){
        if (s != 0){
            s = s + 1;
        }
    }

    //post-condition
    /*@ assert s == 0; */

}