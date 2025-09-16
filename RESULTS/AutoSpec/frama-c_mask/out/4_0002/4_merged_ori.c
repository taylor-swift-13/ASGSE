#include<limits.h>


int test(int x) {
    int a = x;
    int y = 0;


    /*@
    loop invariant y == x - a;
    loop invariant y <= x;
    loop invariant y + a == x;
    loop invariant a <= x;
    loop invariant a + y == x;
    loop invariant 0 <= y;
    loop invariant 0 <= a;
    loop assigns y;
    loop assigns a;
    */
    while(a != 0) {
        y = y + 1;
        a = a - 1;
    }
    return y;
}
    
int main() {
    int num = test(3);
    return 0;
}