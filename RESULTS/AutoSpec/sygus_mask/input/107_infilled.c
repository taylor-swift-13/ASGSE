/*@
requires a <= m;
*/
void foo(int a, int m) {
    int j = 0;
    int k = 0;

    /* @ >>> INFILL <<< */
    while ( k < 1) {
        if(m < a) {
            m = a;
        }
        k = k + 1;
    }


}
