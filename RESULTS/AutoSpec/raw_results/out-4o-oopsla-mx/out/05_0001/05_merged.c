#include <assert.h>
int unknown1();
int unknown2();
int unknown3();
int unknown4();

void main(int flag)
{

	int x = 0;
	int y = 0;

	int j = 0;
	int i = 0;

	/*@
	loop invariant y * (y + 1) / 2 <= j;
	loop invariant x == y;
	loop invariant j == y * (y + 1) / 2 + (flag ? y : 0);
	loop invariant j == (y * (y + 1)) / 2 + (flag ? y : 0);
	loop invariant i == x * (x + 1) / 2;
	loop invariant i == (x * (x + 1)) / 2;
	loop invariant i <= j;
	loop invariant \at(i, Here) <= \at(j, Here);
	loop invariant 0 <= y;
	loop invariant 0 <= x;
	loop invariant 0 <= j;
	loop invariant 0 <= i;
	loop assigns y;
	loop assigns x;
	loop assigns j;
	loop assigns i;
	*/
	while(unknown1())
	{
	  x++;
	  y++;
	  i += x;
	  j += y;
	  if (flag)
	  	j+=1;
	} 
	//@ assert j>=i;
	
}
