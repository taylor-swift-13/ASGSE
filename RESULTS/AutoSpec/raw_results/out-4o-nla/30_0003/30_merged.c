
int main30(int x,int y,int n) {
    // variable declarations
	int z=0;
	int w=0;
	int p=0;

    //precondition
    // loop body
	/*@
	loop invariant z == (z - x * x * n);
	loop invariant z == (p / y) * x;
	loop invariant w == y * y * (p / y);
	loop invariant w == (w - y * y * n);
	loop invariant p == (p - x * y * n);
	loop invariant p * p <= z * w;
	loop invariant 0 <= n;
	loop assigns z;
	loop assigns w;
	loop assigns p;
	loop assigns n;
	*/
	while(n > 0) {
		z = z + x * x;
		w = w + y * y;
		p = p + x * y;
		n -= 1;
	}
    // post-condition
	// @ assert z * w >= p * p;
}
