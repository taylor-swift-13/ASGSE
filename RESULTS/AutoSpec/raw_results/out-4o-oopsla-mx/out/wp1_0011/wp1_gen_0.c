/*@
requires -20 <= x <= 20;
requires -20 <= y <= 20;
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