/*@
requires INT_MIN <= x <= INT_MAX;
requires INT_MIN <= y <= INT_MAX;
ensures \result == x - y;
assigns \nothing;
*/
int diff (int x, int y) {
    return x-y;
}

void moo9() {
    int t = diff(10, 5);
    // @ assert t == 5;
}