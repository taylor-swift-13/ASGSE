
/*@
```c
requires \true;
ensures \result == x || \result == y;
ensures \result >= x && \result >= y;
assigns \nothing;
```
*/
int max ( int x, int y ) {
    if ( x >=y ) 
        return x ;
    return y ;
}

void moo11()
{
    int s = max(34,45);
    // @ assert s==45;
    int t = max(-43,34);
    // @ assert t==34;
}

