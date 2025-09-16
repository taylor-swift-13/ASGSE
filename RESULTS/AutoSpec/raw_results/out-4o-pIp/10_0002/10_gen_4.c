
typedef struct TAG_UPS_2MS
{	
	int flgABChoose;				
    int wPulse;
	int stateFlag[2];				
    
} SThrDistribute;


typedef struct __ThrABAutoChoose
{
	SThrDistribute			mThrDistribute;
	
} ThrABAutoChoose;



/*@
requires \valid(pIp);
requires \valid(pIp->mThrDistribute.stateFlag + (0..1));
assigns pIp->mThrDistribute.flgABChoose;
ensures (pIp->mThrDistribute.stateFlag[0] == 1 && pIp->mThrDistribute.stateFlag[1] == 1) ==> (pIp->mThrDistribute.flgABChoose == 0xCC);
ensures (pIp->mThrDistribute.stateFlag[0] == 0 && pIp->mThrDistribute.stateFlag[1] == 1) ==> (pIp->mThrDistribute.flgABChoose == 0x33);
ensures !(pIp->mThrDistribute.stateFlag[0] == 1 && pIp->mThrDistribute.stateFlag[1] == 1) && !(pIp->mThrDistribute.stateFlag[0] == 0 && pIp->mThrDistribute.stateFlag[1] == 1) ==> (pIp->mThrDistribute.flgABChoose == 0x00);
*/
void ThrABAutoChooseFun(ThrABAutoChoose *pIp)
{

    if ((pIp -> mThrDistribute.stateFlag[0] == 1) &&
        (pIp -> mThrDistribute.stateFlag[1] == 1))
    {

        pIp -> mThrDistribute.flgABChoose = 0xCC ;
    }
    else if ((pIp -> mThrDistribute.stateFlag[0] == 0) &&
             (pIp -> mThrDistribute.stateFlag[1] == 1))
    {
        pIp -> mThrDistribute.flgABChoose = 0x33 ;
    }
    else
    {
        pIp -> mThrDistribute.flgABChoose = 0x00 ;
    }

    return ;
}

void main10(ThrABAutoChoose *pIp)
{

	pIp -> mThrDistribute.stateFlag[0] = 0;
	pIp -> mThrDistribute.stateFlag[1] = 0;

	ThrABAutoChooseFun(pIp);

    // @ assert pIp -> mThrDistribute.flgABChoose == 0x00; 
    // @ assert pIp -> mThrDistribute.stateFlag[0] == 0;    
    // @ assert pIp -> mThrDistribute.stateFlag[1] == 0; 
    // @ assert pIp -> mThrDistribute.wPulse == \at(pIp -> mThrDistribute.wPulse, Pre);  
    
}