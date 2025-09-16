/*@
requires n >= 0;
requires \valid(a+(0..n-1));
requires \valid(a + (0..n-1));
assigns \nothing;
*/
int sumArray(int *a, int n) {
    int p = 0, sum = 0;

    /*@
    loop invariant 0 <= p;
    loop assigns sum;
    loop assigns p;
    */
    while (p < n) {
        sum = sum + a[p];
        p++;
    }
    return sum;
}

// write a test
void main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = sumArray(arr, 5);
    //@ assert sum == 15;
}