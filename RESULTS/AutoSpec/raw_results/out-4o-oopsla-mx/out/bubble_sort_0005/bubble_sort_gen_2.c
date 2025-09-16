#include <stdio.h>

void bubbleSort(int *a, int n) {
    if (n <= 0) return;
    int i, j, temp;

    for(i=n-1; i>0; i--) {
        /*@
        ```c
        loop invariant 0 <= j <= i;
        loop invariant \forall integer k; 0 <= k < j ==> a[k] <= a[k+1];
        loop invariant \forall integer k; i < k < n ==> a[k-1] <= a[k];
        loop assigns j;
        loop assigns temp;
        loop assigns a[0..i];
        ```
        */
        for(j=0; j<i; j++) {
            if (a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

// write a test
void main() {
    int arr[5] = {5, 4, 3, 2, 1};
    bubbleSort(arr, 5);
    // @ assert \forall int i; 0 <= i < 4 ==> arr[i] <= arr[i+1];
}