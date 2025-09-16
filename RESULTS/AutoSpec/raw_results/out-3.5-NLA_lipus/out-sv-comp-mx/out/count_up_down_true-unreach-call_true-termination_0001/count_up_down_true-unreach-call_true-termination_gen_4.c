// count_up_down_true-unreach-call_true-termination.c

/*@
requires n > 0;
*/
int foo(int n, int x, int y) {
	x = n;
	y = 0;
	
	/*@
	loop invariant x + y == n;
	loop invariant x > 0;
	loop invariant y <= 0;
	loop assigns x, y;
	*/
	while (x > 0) {
		x++;
		y--;
	}

	// @ assert y == n;

	return 0;
}
