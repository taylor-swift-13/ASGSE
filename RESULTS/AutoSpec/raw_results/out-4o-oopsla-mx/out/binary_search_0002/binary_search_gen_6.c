/*@
requires \valid(a+(0..n-1));
requires \forall integer i, j; 0 <= i < j < n ==> a[i] <= a[j];
ensures \result == -1 ==> \forall integer i; 0 <= i < n ==> a[i] != x;
ensures \result != -1 ==> 0 <= \result < n && a[\result] == x;
assigns \nothing;
*/
int binarysearch(int* a, int x, int n) {

    int low = -1;
    int high = n;
    int p;

    /*@
    loop invariant high <= n;
    loop invariant -1 <= low;
    loop assigns p;
    loop assigns low;
    loop assigns high;
    */
    while (low+1 < high) {
        p = (low + high) / 2;
        if (a[p] == x) 
            return p;
        else 
            if (a[p] < x)
            low = p;
            else high = p;
    }
    return -1;
}

// write a test
void main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = binarysearch(arr, 3, 5);
    // @ assert arr[sum] == 3;
}