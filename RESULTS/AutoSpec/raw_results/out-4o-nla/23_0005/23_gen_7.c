/*@
requires x >= 0 && x <= 10;
*/
int main23(int x) {
	
	int y = x * x;

	/*@
	loop invariant x >= 0;
	loop invariant y >= 0;
	loop invariant y == x * x || y > x * x;
	loop invariant x <= 10 || y > 100;
	loop invariant x >= \old(x);
	loop invariant y >= \old(y);
	loop assigns y;
	loop assigns x;
	*/
	while(unknown()) {
		x = x + 1;
		y = y + 1;
	}

	// @ assert y <= x * x;
	return 0;
}

