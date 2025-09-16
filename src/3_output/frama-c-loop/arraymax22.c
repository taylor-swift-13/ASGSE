
int arraymax22(int* a, int n) {
  int i = 1;
  int max = a[0];

  
            
        /* >>> LOOP INVARIANT TO FILL <<< */
        
            /*@
          loop invariant (1 < \at(n,Pre)) ==> (1 <= i <= n);
          loop invariant (1 < \at(n,Pre)) ==> (((max == a[0])&&(i == 1)&&(n == \at(n,Pre))&&(a == \at(a,Pre))) || (\forall integer j; 0 <= j < i ==> a[j] <= max));
          loop invariant (!(1 < \at(n,Pre))) ==> ((max == a[0])&&(i == 1)&&(n == \at(n,Pre))&&(a == \at(a,Pre)));
          loop invariant n == \at(n,Pre);
          loop invariant a == \at(a,Pre);
          loop invariant \forall integer j; 0 <= j < i ==> a[j] <= max;
          loop assigns i, max;
            */
            while (i < n) {
    // Beginning of loop
    if (max < a[i])
    max = a[i];
    i = i + 1;
    // End of loop: Loop invariant comes here
  }
            
  return max;
}
