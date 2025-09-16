/*@
requires \valid(b);
requires \valid(a);
requires \valid(a) && \valid(b);
ensures \valid(b) ==> *b == \old(*b);
ensures *b ==> *a == 0;
ensures *b == \old(*b);
ensures *b == 0 ==> *a == \old(*a);
ensures *b != 0 ==> *a == 0;
ensures (*b) == 0 ==> *a == \old(*a);
ensures (*b) != 0 ==> *a == 0;
ensures !(*b) ==> *a == \old(*a);
assigns \nothing;
assigns \if (*b) *a;
assigns *a;
assigns *a \from *b;
*/
void reset_1st_if_2nd_is_true(int* a, int const* b){
    if(*b) *a = 0 ;
}

int moo19(){
    int a = 5 ;
    int x = 0 ;
    reset_1st_if_2nd_is_true(&a, &x);
    // @ assert a == 5 ;
    // @ assert x == 0 ;

    int const b = 1 ;
    reset_1st_if_2nd_is_true(&a, &b);
    // @ assert a == 0 ;
    // @ assert b == 1 ;
    return 0;
}

