
/* 1. FUNC CONTRACT */
 void swap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

/* 2. FUNC CONTRACT */
int main(){
    int a = 42;
    int b = 37;

    swap(&a, &b);

   

    return 0;
}