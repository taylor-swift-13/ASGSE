int unknown();
void main21(){
	int x = 0;
	int y = 0;

	/*@
	loop invariant x >= y;
	loop invariant x >= 0;
	loop invariant y >= 0;
	loop invariant \forall integer k; 0 <= k < y ==> k < x;
	loop invariant x == 0 ==> y == 0;
	loop invariant y > 0 ==> x > 0;
	loop invariant x >= y * y;
	loop invariant x == y * y;
	loop invariant \forall integer k; 0 <= k < y ==> k*k < x;
	loop invariant 0 <= y;
	loop invariant 0 <= x;
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
