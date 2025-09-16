
int array_max_advanced(int* arr, int n) {
    int max = arr[0];
   
    /*@
    loop invariant arr[0] <= max;
    loop invariant \forall integer k; 0 <= k < i ==> max >= arr[k];
    loop invariant \forall integer k; 0 <= k < i ==> arr[k] <= max;
    loop invariant 0 <= i;
    loop assigns max;
    loop assigns i;
    */
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// write a test
void main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int max = array_max_advanced(arr, 5);
    //@ assert max >= arr[0];
    //@ assert max >= arr[1];
    //@ assert max >= arr[2];
    //@ assert max >= arr[3];
    //@ assert max >= arr[4];

}