/*@
requires \valid(a) && \valid(b) && \valid(c);
assigns *a, *b, *c;
ensures *a <= *b <= *c;
ensures \exists int u, v, w; u == *a && v == *b && w == *c && (u == \old(*a) || u == \old(*b) || u == \old(*c)) && (v == \old(*a) || v == \old(*b) || v == \old(*c)) && (w == \old(*a) || w == \old(*b) || w == \old(*c));
*/
void order_3(int *a, int *b, int *c) {
    if (*a > *b) {
        int temp = *a;
        *b = *a;
        *a = temp;
    }
    if (*a > *c) {    
        int temp = *a;
        *a = *c;
        *c = temp;
    }
    if (*b > *c) {
        int temp = *b;
        *b = *c;
        *c = temp;
    }
}

void test(){
    
    int a1 = 5, b1 = 3, c1 = 4 ;
    order_3(&a1, &b1, &c1) ;
    // @ assert a1 == 3 && b1 == 4 && c1 == 5;
    
    int a2 = 2, b2 = 2, c2 = 2 ;
    order_3(&a2, &b2, &c2) ;
    // @ assert a2 == 2 && b2 == 2 && c2 == 2 ;

    int a3 = 4, b3 = 3, c3 = 4 ;
    order_3(&a3, &b3, &c3) ;
    // @ assert a3 == 3 && b3 == 4 && c3 == 4 ;

    int a4 = 4, b4 = 5, c4 = 4 ;
    order_3(&a4, &b4, &c4) ;
    // @ assert a4 == 4 && b4 == 4 && c4 == 5 ;
}