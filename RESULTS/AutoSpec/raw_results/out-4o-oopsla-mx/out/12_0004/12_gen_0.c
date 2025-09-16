int unknown1();
int unknown2();


int main(int flag)
{
  int t = 0;
  int s = 0;
  int a = 0;
  int b = 0;
  /*@
  ```c
  loop invariant a == b;
  loop invariant t >= 2 * s;
  loop invariant s == (a * (a + 1)) / 2; 
  loop invariant t == s + a * (flag ? a : 0);
  loop assigns a, b, s, t;
  
  loop invariant 0 <= y <= x + 2;
  loop assigns y;
  ```
  */
  while(unknown1()) {
    a++;
    b++;
    s += a;
    t += b;
    if(flag) {
      t += a;
    }
  } 
  //2s >= t
  int x = 1;
  if(flag) {
    x = t - 2*s + 2;
  }
  //x <= 2
  int y = 0;
  while(y <= x){
    if(unknown2()) 
       y++;
    else 
       y += 2;
  }
  // @ assert y <= 4;
}

