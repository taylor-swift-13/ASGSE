/*@
requires z>=0 && z<=10 && k>0 && k<=10;
*/

int main9(int z,int k){
  

  int x=1;
  int y=z;
  int c=1;

  /*@
  loop invariant 1 <= c <= k;
  loop invariant x == z^(c-1) + z^(c-2) + ... + z^0;
  loop invariant y == z^c;
  loop invariant x*z - x - y + 1 == 0;
  loop assigns c, x, y;
  */
  while (c < k){
 c = c + 1;
 x = x*z + 1;
 y = y*z;
  }

// @ assert x*z - x - y + 1 == 0;
}
