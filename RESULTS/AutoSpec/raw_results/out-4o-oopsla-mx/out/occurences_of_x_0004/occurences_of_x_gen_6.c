/*@
requires \valid(a + (0..n-1)) && \valid(sum);
ensures \result >= 0;
ensures \result == \sum(0..n-1, a[\i] == x ? 1 : 0);
ensures *sum == \result * x;
assigns *sum;
*/
int func(int *a, int n, int x, int *sum) {
    int p = 0;
    int count = 0;
    *sum = 0;

    /*@
    loop invariant \forall integer k; 0 <= k < p ==> (a[k] == x ? (*sum == count * x) : (*sum == count * x));
    loop invariant \forall integer i; 0 <= i < p ==> (a[i] == x ==> \at(*sum, LoopEntry) + x * count == *sum);
    loop invariant 0 <= p;
    loop invariant 0 <= count;
    loop invariant *sum == count * x;
    loop assigns p;
    loop assigns count;
    loop assigns *sum;
    */
    while (p < n) {
        if (a[p] == x) {
            count = count + 1;
            *sum = *sum + x;
        }
        p = p + 1;
    }
    Label_a:
    *sum += 0;
    // @ assert \at(*sum, Label_a) == count*x;
    return count;
}

// write a test
void main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    int count = func(arr, 5, 3, &sum);
    // @ assert sum == count*3;
}