/*@
requires \valid(a) && \valid(b);
requires \separated(a, b);
ensures *a == \old(*b) && *b == \old(*a);
assigns *a, *b;
*/
 void swap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    int a = 42;
    int b = 37;

    swap(&a, &b);

    //@ assert a == 37 && b == 42;

    return 0;
}