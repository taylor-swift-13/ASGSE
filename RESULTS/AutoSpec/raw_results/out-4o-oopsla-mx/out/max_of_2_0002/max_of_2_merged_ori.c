/*@
requires \true;
ensures x >= y ==> \result == x;
ensures x < y ==> \result == y;
ensures \result >= x && \result >= y;
ensures \result == x || \result == y;
ensures (x >= y ==> \result == x) && (y > x ==> \result == y);
assigns \nothing;
*/
int max(int x, int y) {
    if (x >= y) {
        return x;
    }
    return y;
}

// write a test
void main() {
    int s = max(34,45);
    // @ assert s==45;
    int t = max(-43,34);
    // @ assert t==34;
}