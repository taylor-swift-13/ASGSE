 void swap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int moo10(){
    int a = 42;
    int b = 37;

    swap(&a, &b);

    //@ assert a == 37 && b == 42;

    return 0;
}