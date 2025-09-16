int main() {
  int x = -15000;
  int y = 0;
  
  /*@
  loop invariant x <= -15000 + y * (y - 1) / 2;
  loop invariant x < 0 || y > 0;
  loop invariant x < 0 || x >= 0;
  loop invariant 0 <= y;
  loop assigns y;
  loop assigns x;
  */
  while (x < 0) {
    x  = x + y;
    y  = y + 1;
  }
  // post-condition
  //@ assert y > 0;
}
