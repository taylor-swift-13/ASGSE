
void reverse(int *a, int n) {
    int i = 0;
    int j = n-1;

    /*@
      loop invariant 0 <= i <= n/2;
      loop invariant n/2 <= j < n;
      loop invariant \forall integer k; 0 <= k < i ==> a[k] == \at(a[n-1-k], Pre);
      loop invariant \forall integer k; j < k < n ==> a[k] == \at(a[n-1-k], Pre);
      loop assigns i, j, a[0..n-1];
      loop variant n/2 - i;
    */
    while (i < n/2) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }

    /*@
      requires n >= 0;
      requires \valid(a + (0 .. n-1));
      ensures \forall integer k; 0 <= k < n ==> a[k] == \at(a[n-1-k], Pre);
    */
}

void goo14() {
    int arr[5] = {1, 2, 3, 4, 5};
    reverse(arr, 5);
    //@ assert arr[4] == 1;
}
