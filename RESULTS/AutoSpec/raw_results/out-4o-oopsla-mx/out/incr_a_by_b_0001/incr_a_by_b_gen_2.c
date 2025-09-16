/*@
requires \valid(a) && \valid_read(b);
ensures *a == \old(*a) + *b;
ensures *b == \old(*b);
ensures \result == *a;
assigns *a;
*/
int incr_a_by_b(int* a, int const* b){
    *a += *b;
    return *a;
}

// write a test
void main() {
    int a = 10;
    int b = 20;
    incr_a_by_b(&a, &b);
    // @ assert a == 30;
    // @ assert b == 20;
}