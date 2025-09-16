
void foo002(int A[2048]) {
  int i = 0;

  
  /*@
  loop invariant i <= 1024;
  loop invariant \forall integer k; 0 <= k < i ==> A[k] == k;
  loop invariant \forall integer j; 0 <= j < i ==> A[j] == j;
  loop invariant 0 <= i;
  loop assigns i;
  loop assigns A[0..1023];
  */
  for (i = 0; i < 1024; i++) {
    A[i] = i;
  }

  // @ assert A[1023] == 1023;
}
