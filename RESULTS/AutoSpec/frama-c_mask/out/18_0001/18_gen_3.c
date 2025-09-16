#include <limits.h>


/*@
requires INT_MIN <= x <= INT_MAX;
requires INT_MIN <= y <= INT_MAX;
ensures \result == (x >= y ? x : y);
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
  
    int t = max(-43,34);
  
}