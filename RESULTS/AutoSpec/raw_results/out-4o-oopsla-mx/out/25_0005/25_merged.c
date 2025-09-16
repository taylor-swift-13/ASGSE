#include <assert.h>
int unknown1();
int unknown2();
int unknown3();
int unknown4();

void main()
{
  int x = 0;
  int y = 0;
  int i = 0;
  int j = 0;

  while(unknown1())
  {
    /*@
    loop invariant y <= x;
    loop invariant x >= 0 && y >= 0;
    loop invariant x == y || x == y - 1;
    loop invariant x <= y;
    loop invariant x - y == i - j;
    loop invariant j <= i;
    loop invariant i >= 0 && j >= 0;
    loop invariant i + j == x + y;
    loop invariant i + j <= x + y;
    loop invariant 0 <= y;
    loop invariant 0 <= x;
    loop invariant 0 <= j;
    loop invariant 0 <= i;
    loop assigns j;
    loop assigns i;
    */
    while(unknown2())
    {
       if(x == y)
          i++;
       else
          j++;
    }
    if(i >= j)
    {
       x++;
       y++;
    }
    else
       y++;
  }

  // @ assert i >= j;
}
