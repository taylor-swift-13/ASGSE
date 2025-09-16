/*@
requires y > 0;
requires \valid(r);
ensures x == \result * y + *r;
ensures 0 <= *r < y;
assigns *r;
*/
int fun(int x, int y , int *r) {
    *r = x;
    int d = 0;

    /*@
    loop invariant x == y * d + *r;
    loop invariant d*y + *r == x;
    loop invariant d * y + *r == x;
    loop invariant 0 <= d;
    loop invariant *r == x - d*y;
    loop invariant *r == x - d * y;
    loop invariant *r + d * y == x;
    loop assigns d;
    loop assigns *r;
    */
    while (*r >= y) {
        *r = *r - y;
        d = d + 1;
    }
    return d;
}

int main() {
    int a = 3;
    int num = fun(1, 2, &a);
    // @ assert a == 1;
    // @ assert num == 0;
    return 0;
}