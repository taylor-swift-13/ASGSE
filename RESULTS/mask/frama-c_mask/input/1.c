int arraymax(int* a, int n) {
  int i = 1;
  int max = a[0];

  while (i < n) {
    if (max < a[i])
    max = a[i];
    i = i + 1;
  }
  return max;
}

void goo1() {
  int arr[5] = {1, 2, 3, 4, 5};
  int max = arraymax(arr, 5);
}