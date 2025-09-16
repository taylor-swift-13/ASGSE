int unknown1();
int unknown2();
int unknown3();

void foo(int k)
{
  int z = k;
  int x = 0;
  int y = 0;

  while(unknown1())
  {
    int c = 0;
    /*@
    loop invariant z == k + y;
    loop invariant x >= 0;
    loop invariant y >= 0;
    loop invariant x == y;
    loop invariant z >= k;
    loop assigns z, x, y;
    */
    while(unknown2())
    {
      if(z==k+y-c)
      {
        x++;
        y++;
        c++;
      }else
      {
        x++;
        y--;
        c++;
      }
    }
    while(unknown3())
    {
      x--;
      y--;
    }
    z=k+y;
  }
  // @ assert x==y;
}
