int arraysearch5(int* a, int x, int n) { 

  for (int p = 0; p < n; p++) {
    // STart
    if (x == a[p]) 
       return 1;
    // End
  }
  return 0;
}

// write a test
void goo5() {
  int arr[5] = {1, 2, 3, 4, 5};
  int sum = arraysearch5(arr, 3, 5);
/* MASK_ACSL_ASSERT_LINE */
}