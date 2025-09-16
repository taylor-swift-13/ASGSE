
/* 2. FUNC CONTRACT */
int arraymax(int* a, int n) {
  int i = 1;
  int max = a[0];


  /* 1. LOOP INVARIANT */
  while (i < n) {
    if (max < a[i])
    max = a[i];
    i = i + 1;
  }
  return max;
}

/* 3. FUNC CONTRACT */
void main() {
  int arr[5] = {1, 2, 3, 4, 5};
  int max = arraymax(arr, 5);
}