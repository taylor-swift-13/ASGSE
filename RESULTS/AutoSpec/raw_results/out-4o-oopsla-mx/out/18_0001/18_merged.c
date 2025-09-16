#include <assert.h>
int unknown1();
int unknown2();
int unknown3();
int unknown4();

/*
 * Adapted from ex17.c in NECLA test suite
 */
/*@
requires flag > 0;
*/
void foo(int flag, int a) {
   int b;
   int j = 0;
   /*@
   loop invariant j == b;
   loop invariant j <= b;
   loop invariant flag > 0 ==> j == b;
   loop invariant flag == 0 ==> j == 0;
   loop invariant b <= 100;
   loop invariant 0 <= j;
   loop invariant 0 <= b;
   loop invariant 0 < flag;
   loop invariant (flag ==> j == b) && (!flag ==> j == 0);
   loop assigns j;
   loop assigns b;
   */
   for (b = 0; b < 100 ; ++b){
      if (flag)
         j = j + 1;
   }

   if(flag) {
      //@ assert j==100;
   }
}
