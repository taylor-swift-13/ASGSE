int unknown();

int main() {
  int c = 0;

  /*@
  loop invariant c == 40 ==> c == 40 || c == 1;
  loop invariant c <= 40;
  loop invariant \forall integer k; c == 40 ==> c >= 1 && c <= 40;
  loop invariant \forall integer k; c != 40 ==> c >= 0 && c <= 39;
  loop invariant 0 <= c;
  loop assigns c;
  */
  while (unknown()) {
    if (unknown()) {
      if (c != 40) {
        c  = c + 1;
      }
    } else {
      if (c == 40) {
        c  = 1;
      }
    }
  }
  // post-condition
  if (c < 0) {
    if (c > 40) {
      //@ assert  (c == 40) ;
    }
  }
}
