
int unknown();

/*@
requires (x + y) == k;
requires n > 0;
*/
void foo020(int x, int y, int k, int j, int i, int n) {
 
  int m = 0;
  j = 0;
  while (j < n) {
    if (j == i) {
      x++;
      y--;
    } else {
      y++;
      x--;
    }
    if (unknown()){
       m = j;
    }
    j++;
  }
  /*@ assert (x + y) == k; */
  
  /*@ assert(n > 0) ==> (0 <= m && m < n);*/
  

}