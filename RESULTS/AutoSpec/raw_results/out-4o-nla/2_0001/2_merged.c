/*@ requires x>0;
    requires y>0;
*/
int main2(int x,int y){
 
  int q=0;
  int r=0;
  
  /*@
  loop invariant y * q + r <= x;
  loop invariant x == y * q + r || x > y * q + r;
  loop invariant x == (y * q + r + (x - (y * q + r)));
  loop invariant x - q * y == r + (x - q * y - r);
  loop invariant r < y;
  loop invariant q <= x / y;
  loop invariant q <= x / y + 1;
  loop invariant q * y + r == x - (x - q * y - r);
  loop invariant q * y + r <= x;
  loop invariant 0 <= r;
  loop invariant 0 <= q;
  loop assigns r;
  loop assigns q;
  */
  while(x > y * q + r) {
      if (r == y - 1){
          r = 0;
          q += 1;
      }
      else{
          r += 1;
      }

  }
  
  // @ assert q == x / y;
  
}
