int func(int num) {
    int i = 0;
    int sum = 0;

    /*@
    loop invariant num >= 0;
    loop invariant sum == (\sum integer k; 0 <= k <= i ==> k);
    loop invariant sum <= 10*i;
    loop invariant i >= 0;
    loop invariant \forall integer k; num == 0 ==> sum == (\sum integer k; 0 <= k < 10 ==> k);
    loop invariant i < 10;
    loop invariant 0 <= sum;
    loop invariant 0 <= i;
    loop assigns sum;
    loop assigns num;
    loop assigns i;
    */
    while(num>0) {
        i = num%10;
        sum += i;
        num /= 10;
    }
    return sum;
}

// write a test
void main() {
    int t = func(123);
    // @ assert t == 6;
}