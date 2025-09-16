int unknown1();
int unknown2();

void foo029() {
  int a = 1;
  int b = 1;
  int c = 2;
  int d = 2;
  int x = 3;
  int y = 3;
 
  /*@
  loop invariant y == b + d;
  loop invariant x == a + c;
  loop invariant c <= 2;
  loop invariant b <= 1;
  loop invariant a + c == b + d;
  loop invariant 3 <= y;
  loop invariant 3 <= x;
  loop invariant 2 <= d;
  loop invariant 0 <= c;
  loop invariant 0 <= c && c <= 2;
  loop invariant 0 <= c && 0 <= b;
  loop invariant 0 <= b;
  loop invariant 0 <= b && b <= 1;
  loop invariant 0 <= a && 0 <= b;
  loop invariant (x + y) % 2 == 0 || (x + y) % 2 == 1;
  loop assigns y;
  loop assigns x;
  loop assigns d;
  loop assigns c;
  loop assigns b;
  loop assigns a;
  ```c;
  ```;
  */
  while (unknown1()) {
    x = a + c;
    y = b + d;

    if ((x + y) % 2 == 0) {
      a++;
      d++;
    } else {
      a--;
    }

   
    /*@
    loop invariant y == b + d;
    loop invariant x == a + c;
    loop invariant c <= 2;
    loop invariant b <= 1;
    loop invariant a + c == b + d;
    loop invariant 0 <= c && 0 <= b;
    loop invariant (x + y) % 2 == 0 || (x + y) % 2 == 1;
    loop assigns y;
    loop assigns x;
    loop assigns d;
    loop assigns c;
    loop assigns b;
    loop assigns a;
    */
    while (unknown2()) {
      c--;
      b--;
    }
  }
  //@assert a + c == b + d;
}