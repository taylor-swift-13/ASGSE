//svcomp_css2003
int unknown();
/*@
  requires k >= 0;
  requires k <= 1;
*/
int hoo14(int k){
    int i = 1;
    int j = 1;

    //pre-condition
    //loop-body
    while (unknown()) {
        i = i + 1;
        j = j + k;
        k = k - 1;
    }

    //post-condition
    /*@ assert i >= 1; */
}