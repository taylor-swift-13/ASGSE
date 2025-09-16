/*@
requires x >= 0 && y >= x;
*/
void main27(int x,int y){
	
	int z=0;
	int w=0;

	/*@
	loop invariant 0 <= w <= y;
	loop invariant z == x * w;
	loop assigns w;
	loop assigns z;
	*/
	while(w < y) {
		z += x;
		w += 1;
	}

	// @ assert z == x * y;

	return; 
}
