int fun(int x, int y) {
    int r = x;
    int d = 0;

   
    /* @ >>> INFILL <<< */
    while (r >= y) {
        printf("r = %d   d = %d   y = %d   x = %d\n", r, d, y, x);
        // Beginning
        r = r - y;
        d = d + 1;
        // ENd
     
    }
    return d;
}