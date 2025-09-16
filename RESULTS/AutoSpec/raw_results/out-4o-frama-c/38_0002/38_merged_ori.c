

/*@
requires \true;
requires INT_MIN < val <= INT_MAX;
ensures val >= 0 ==> \result == val;
ensures val < 0 ==> \result == -val;
ensures \result >= 0;
ensures (val >= 0 ==> \result == val) && (val < 0 ==> \result == -val);
ensures (val < 0 ==> \result == -val) && (val >= 0 ==> \result == val);
assigns \nothing;
```c;
```;
/*@;
*/
int abs(int val) {
    if(val < 0) return -val;
    return val;
}

void moo1(int a) {
    int b = abs(-42);
    // @ assert b == 42;
    int c = abs(42);
    // @ assert c == 42;
    int d = abs(a);
    int e = abs(-997);

}
