/*@
requires x == 1 && x <= y;
*/
int main26(int x,int y) {
	
	int z=1;
	int w=1;

	/*@
	loop invariant z <= w;
	loop invariant w == z * x || w == z * (x - 1) * x;
	loop invariant x >= 1 && x <= y + 1;
	loop invariant 1 <= z;
	loop invariant 1 <= w;
	loop invariant x - 1 <= y;
	loop invariant x >= 1 && z + (y - x + 1) == w / (x == y + 1 ? 1 : x);
	loop invariant z <= w;
	loop invariant x >= 1 && x <= y + 1;
	loop invariant x <= y + 1;
	loop invariant 1 <= z;
	loop invariant 1 <= x;
	loop invariant 1 <= w;
	loop assigns z;
	loop assigns x;
	loop assigns w;
	*/
	while(x <= y)
	{
		w = w * x;
		if (x < y) {
			z = z * x;
		}
		x += 1;
	}

	// @ assert w == z * y;
	return 0;
}
