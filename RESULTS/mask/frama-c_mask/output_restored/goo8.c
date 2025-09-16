


/*@

ensures \exists int x_59;  x_59 <= 0 ==> c == c;
ensures \exists int x_59;  x_59 <= 0 ==> (c > 0 ==> x_59 + \result == c) && (c > 0 ==> \result >= 0) && (!(c > 0) ==> \result == 0 && x_59 == c );

*/

int func8(int c) 
{
    int x = c;
    int y = 0;

    /*@
      loop invariant (\at(c,Pre) > 0) ==> (x + y == \at(c,Pre));
      loop invariant (\at(c,Pre) > 0) ==> (y >= 0);
      loop invariant (!(\at(c,Pre) > 0)) ==> ((y == 0)&&(x == \at(c,Pre))&&(c == \at(c,Pre)));
      loop invariant c == \at(c,Pre);
    */
    while (x > 0) {
        x = x - 1;
        y = y + 1;
    }

    return y;
}
void goo8() 
{
    int t = func8(5);
    //@ assert t == 5;
   
}


