int arraySearch4(int *a, int x, int n) {
    int p = 0;

    while (p < n) {
        if (a[p] == x) {
            return 1;
        }
        p++;
    }
    return 0;
}

// write a test
void goo4() {
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = arraySearch4(arr, 3, 5);
    //@ assert sum == 1;
}
