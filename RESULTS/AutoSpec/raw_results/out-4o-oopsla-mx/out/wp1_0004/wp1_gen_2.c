/*@
requires -10 <= x <= 0;
requires 0 <= y <= 10;
assigns \nothing;
ensures -15 <= \result <= 5;
*/
int function(int x, int y) {
    int res ;
    y += 10 ;
    x -= 5 ;
    res = x + y ;
    // @ assert -15 <= res <= 5;
    return res ;
}

// write a test
void main() {
    int t = function(-5, 5);
    // @ assert t == 0;
}