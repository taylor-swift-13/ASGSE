//svcomp_benchmark38_conjunctive
int unknown();

void hoo15(){
    int x = 0;
    int y = 0;

  

    //loop-body
    /*@
    loop invariant x == 4 * y;
    loop assigns y;
    loop assigns x;
    */
    while (unknown()) {
        x += 4;
        y++;
    }

    //post-condition
    /*@ assert x == 4 * y; */
}