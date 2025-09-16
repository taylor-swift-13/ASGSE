//svcomp_benchmark41_conjunctive
int unknown();

void hoo16(){
    int x = 0;
    int y = 0;
    int z = 0;

   
    //loop-body
    /*@
    loop invariant x == y;
    loop invariant z == -2 * x;
    loop invariant x + y + z == 0;
    loop assigns x;
    loop assigns y;
    loop assigns z;
    */
    while (x > 0) {
        x++;
        y++;
        z -= 2;
    }

    //post-condition
    /*@ assert x + y + z == 0; */
}