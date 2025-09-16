
int main() {
    int x = 1;
    int y = 0;

    /*@
    loop invariant 1 <= x <= 101;
    loop invariant 0 <= y < 100;
    loop invariant y == 100 - x;
    loop assigns x, y;
    */
    while (x <= 100) {
        y = 100 - x;
        x = x +1;
    }

    //post-condition
    //// @ assert y >= 0;
    // @ assert y < 100;
}
