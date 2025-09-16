#include <limits.h>


/*@
requires INT_MIN <= y <= INT_MAX;
requires INT_MIN <= x <= INT_MAX;
ensures \result == x || \result == y;
ensures \result == (x >= y ? x : y);
ensures (y > x) ==> \result == y;
ensures (x >= y) ==> \result == x;
assigns \nothing;
*/
int max ( int x, int y ) {
    if ( x >=y ) 
        return x ;
    return y ;
}

void foo()
{
    int s = max(34,45);
    //@ assert s==45;
    int t = max(-43,34);
    //@ assert t==34;
  
}