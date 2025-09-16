/*@
requires p >= 0 && n >= 0 && r >= 0;
ensures \result == p * n * r / 100;
assigns \nothing;
*/
int simple(int p,int n,int r)
{
    int si;
    si = p*n*r/100;
    return si;
}
 
int moo12()
{
    int s = simple(10000, 3,10);
    /*@ assert s == 3000; */
    return 0;
}