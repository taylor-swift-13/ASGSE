

typedef struct __DevControl
{
  int * p1;
  int * p2;
  int * p3;

} DevControl;

/*@
requires \valid(pIp);
requires \separated(pIp,pIp->p1, pIp->p2, pIp->p3);

ensures pIp->p1 == \old(pIp->p1)&&*pIp->p1 == 60306&&pIp->p2 == \old(pIp->p2)&&*pIp->p2 == 1&&pIp->p3 == \old(pIp->p3)&&*pIp->p3 == 252;

*/

void DevControlFun(DevControl *pIp)

{
	*(pIp->p1)= 0xEB92;

	*(pIp->p2)= 0x01;

	*(pIp->p3)= 0xFC;

	return;
}/*@
    requires \valid(pIp);
requires \separated(pIp,pIp->p1, pIp->p2, pIp->p3);
    */
    
void main35(DevControl *pIp)
{

	pIp -> p1 = 0x0000;
	pIp -> p2 = 0x0000;
	pIp -> p3 = 0x0000;

	DevControlFun(pIp);

	/*@ assert *(pIp->p1) == 0xEB92; */
	/*@ assert *(pIp->p2) == 0x01; */
	/*@ assert *(pIp->p3) == 0xFC; */	

}