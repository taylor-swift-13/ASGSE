
int main() {
    int x = 1;
    int y = 0;

    /*@
    loop invariant 1 <= x <= 11;
    loop invariant y == 10 - x + 1;
    loop invariant y >= 0;
    loop invariant y < 10;
    loop assigns x, y;
    */
    while (x <= 10) {
        y = 10 - x;
        x = x +1;
    }

    //post-condition
    // @ assert y >= 0;
    //// @ assert y < 10;
}
