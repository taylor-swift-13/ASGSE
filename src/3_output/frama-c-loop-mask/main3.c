int func3(int *a, int n, int x, int *sum) {
    int p = 0;
    int count = 0;
    *sum = 0;

    while (p < n) {
        if (a[p] == x) {
            count = count + 1;
            *sum = *sum + x;
        }
        p = p + 1;
    }
    Label_a:
    *sum += 0;
    return count;
}

// write a test
void main3() {
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    int count = func3(arr, 5, 3, &sum);
    //@ assert sum == count*3;
}