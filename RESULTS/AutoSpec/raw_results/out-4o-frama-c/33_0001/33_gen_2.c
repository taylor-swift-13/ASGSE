/*@
requires y != 0;
requires \valid(q);
requires \valid(r);
requires \separated(q, r);
assigns *q, *r;
ensures x == *q * y + *r;
ensures *r < y;
ensures *r >= 0;
*/
void div_rem(unsigned x, unsigned y, unsigned* q, unsigned* r) {
    *q = x / y;
    *r = x % y;
}

// write a test
void moo15() {
    unsigned q, r;
    div_rem(10, 3, &q, &r);
    // @ assert q == 3;
    // @ assert r == 1;
   
}