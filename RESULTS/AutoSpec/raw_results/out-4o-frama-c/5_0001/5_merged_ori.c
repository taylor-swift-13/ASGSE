/*@
requires \valid(a) && \valid(b);
requires \separated(a, b);
ensures *b == \old(*a);
ensures *a == \old(*b);
ensures *a == \old(*b) && *b == \old(*a);
assigns *a, *b;
```c;
```;
*/
void swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int moo5(){
    int a = 37;
    int b = 91;
    swap(&a, &b);
    // @ assert a == 91;
    // @ assert b == 37;
    return 0;
}