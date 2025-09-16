
int main() {
    int x = 1;
    int y = 0;

    /*@
    loop invariant y < 10;
    loop invariant x <= 11;
    loop invariant 1 <= x;
    loop invariant 0 <= y;
    loop assigns y;
    loop assigns x;
    */
    while (x <= 10) {
        y = 10 - x;
        x = x +1;
    }

    //post-condition
    //@ assert y >= 0;
    ////@ assert y < 10;
}
