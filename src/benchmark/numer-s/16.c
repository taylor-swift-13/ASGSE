//svcomp_benchmark41_conjunctive
int unknown();

int hoo16(){
    int x = 0;
    int y = 0;
    int z = 0;

   
    //loop-body
    while (x > 0) {
        x++;
        y++;
        z -= 2;
    }

    //post-condition
    /*@ assert x + y + z == 0; */
}