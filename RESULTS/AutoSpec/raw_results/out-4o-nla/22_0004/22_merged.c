/*@
requires x >= 0;
*/
int main22(int x) {
	
	int y = x * x;

	/*@
	loop invariant y == x * x;
	loop invariant y - x * x <= 1;
	loop invariant x <= y;
	loop invariant x * x <= y;
	loop invariant \forall integer k; y >= k * k ==> k <= x;
	loop invariant \exists integer k; y == k * k && k >= x;
	loop invariant \exists integer k; k >= 0 && y == k * k;
	loop invariant 0 <= y;
	loop invariant 0 <= y - x * x;
	loop invariant 0 <= x;
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

