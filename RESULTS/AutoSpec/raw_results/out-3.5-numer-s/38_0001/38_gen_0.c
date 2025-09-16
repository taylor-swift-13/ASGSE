/*@
  requires a > 2;
*/
void hoo38(int a) {
    //algorithm searching for a divisor for factorization, by Knuth
    int r, k, q, d, n, t, s;
    
    n = s*s;
    d = a;
    r = n % d;
    t = 0;
    k = n % (d - 2);
    q = 4 * (n / (d - 2) - n / d);

    /*@
    loop invariant d * d * q - 2 * q * d - 4 * r * d + 4 * k * d + 8 * r == 8 * n;
    loop invariant d >= 2;
    loop invariant d % 2 == 1;
    loop invariant r >= 0;
    loop invariant k >= 0;
    loop invariant q >= 0;
    loop invariant s >= 0;
    loop invariant n == s * s;
    loop assigns r;
    loop assigns k;
    loop assigns q;
    loop assigns d;
    loop assigns t;
    */
    while (((s >= d) && (r != 0))) {
        if (2 * r  + q < k) {
            t = r;
            r = 2 * r - k + q + d + 2;
            k = t;
            q = q + 4;
            d = d + 2;
        } else if ((2 * r  + q >= k) && (2 * r + q < d + k + 2)) {
            t = r;
            r = 2 * r - k + q;
            k = t;
            d = d + 2;
        } else if ((2 * r  + q >= k) && (2 * r + q >= d + k + 2) && (2 * r + q < 2 * d + k + 4)) {
            t = r;
            r = 2 * r - k + q - d - 2;
            k = t;
            q = q - 4;
            d = d + 2;
        } else {
            t = r;
            r = 2 * r - k + q - 2 * d - 4;
            k = t;
            q = q - 8;
            d = d + 2;
        }
    }

    /*@ assert d * d * q - 2 * q * d - 4 * r * d + 4 * k * d + 8 * r == 8 * n; */
}