int main() {
  int c = 0;
  
  /*@
  loop invariant 0 <= c <= 4;
  loop assigns c;
  */
  while (unknown()) {
    if (unknown()) {
      if (c != 4) {
        c = c + 1;
      }
    } else {
      if (c == 4) {
        c = 1;
      }
    }
  }

}
