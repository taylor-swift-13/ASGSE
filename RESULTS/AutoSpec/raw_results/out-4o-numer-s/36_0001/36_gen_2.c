/*@
  requires n > 0;
*/
void hoo36(int n) {
    
    int sum = 0;   
    int i = 1;     

    
    /*@
    loop invariant 1 <= i <= n + 1;
    loop invariant sum == (i - 1) * i / 2;
    loop assigns i, sum;
    */
    while (i <= n) {
        sum = sum + i;  
        i = i + 1;      
    }

    
    
    /*@ assert sum == (n * (n + 1)) / 2; */
}