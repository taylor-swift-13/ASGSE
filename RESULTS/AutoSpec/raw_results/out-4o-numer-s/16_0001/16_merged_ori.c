//svcomp_benchmark41_conjunctive
int unknown();

void hoo16(){
    int x = 0;
    int y = 0;
    int z = 0;

   
    //loop-body
    /*@
    loop invariant z <= 0;
    loop invariant x <= 0;
    loop invariant x + y + z == 0;
    loop invariant 0 <= y;
    loop invariant 0 <= x;
    loop assigns z;
    loop assigns y;
    loop assigns x;
    */
    while (x > 0) {
        x++;
        y++;
        z -= 2;
    }

    //post-condition
    /*@ assert x + y + z == 0; */
}