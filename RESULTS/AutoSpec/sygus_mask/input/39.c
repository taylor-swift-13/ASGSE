int unknown();

/*@
requires n > 0;
*/
void foo(int n) {
    int c = 0;
    assume (n > 0);

    while (unknown()) {
        if(c == n) {
            c = 1;
        }
        else {
            c = c + 1;
        }
    }


}
