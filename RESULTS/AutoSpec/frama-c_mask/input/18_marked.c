#include <limits.h>


/* 1. FUNC CONTRACT */
int max ( int x, int y ) {
    if ( x >=y ) 
        return x ;
    return y ;
}

/* 2. FUNC CONTRACT */
void foo()
{
    int s = max(34,45);
  
    int t = max(-43,34);
  
}