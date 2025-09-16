int unknown();
void main21(){
	int x = 0;
	int y = 0;

	/*@
	loop invariant x == y * y;
	loop invariant y >= 0;
	loop invariant x >= 0;
	loop invariant x == (y * (y - 1)) + y;
	loop invariant \forall integer k; 0 <= k < y ==> x >= k * k;
	loop invariant \exists integer k; k * k == x && k == y;
	loop invariant (\exists integer k; 0 <= k <= y && x == k * k);
	loop invariant y <= x;
	loop invariant x == y * y;
	loop invariant x == (y * (y - 1)) + y;
	loop invariant \forall integer k; 0 <= k < y ==> x >= k * k;
	loop invariant \exists integer k; k * k == x && k == y;
	loop invariant 0 <= y;
	loop invariant 0 <= x;
	loop invariant (y * (y - 1)) / 2 <= x;
	loop invariant (\exists integer k; 0 <= k <= y && x == k * k);
	loop assigns y;
	loop assigns x;
	*/
	while(unknown()) {
		y = y + 1;
		x = y * y;
	}

	// @ assert x == y * y;*/
	return; 
}
