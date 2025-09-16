/*@
requires \valid(a) && \valid(b);
ensures *a == \old(*b) && *b == \old(*a);
assigns *a, *b;
*/
void swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    int a = 37;
    int b = 91;
    swap(&a, &b);
    // @ assert a == 91;
    // @ assert b == 37;
}