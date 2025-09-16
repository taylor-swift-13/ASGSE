
void foo63(int y) {
    int x = 1;

    /*@
      loop invariant  ((x == 1)&&(y == \at(y,Pre))) || (y == 10 - (x - 1));
      loop invariant  1 <= x <= 11; 
      loop assigns y, x;
    */
    while (x <= 10) {
        y = 10 - x;
        x = x + 1;
    }

    /*@ assert (y >= 0); */
}
