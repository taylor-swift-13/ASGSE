/*@ requires x>0;
    requires y>0;
*/
void main2(int x,int y){
 
  int q=0;
  int r=0;
  
  /*@
  loop invariant x > y * q + r;
  loop invariant 0 <= r < y;
  loop invariant 0 <= (y * q + r) < x;
  loop invariant x == (y * q + r) + (x - (y * q + r));
  loop assigns q, r;
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
