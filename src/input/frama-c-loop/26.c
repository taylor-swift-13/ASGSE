int func26(int num) {
    int i = 0;
    int sum = 0;

    while(num>0) {
        i = num%10;
        sum += i;
        num /= 10;
    }
    return sum;
}

// write a test
void goo26() {
    int t = func26(123);
    //@ assert t == 6;
}