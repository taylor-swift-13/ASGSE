

typedef struct TAG_FAULT_WARNING
{
	
    int countSPLost;				
    int countSPSeen;				
    int countSPset;					
    int countUPSpc;					
     
} SFWarning;


typedef struct TAG_FALSE_RATE_MODULATOR
{
	
	int 	u;						
	int 	r;						
	int 	Yp;						
	int 	Yn;						
	                            	
}SFratemodulator;


typedef struct TAG_DIGITAL_GYRO_DATA
{        
 	int  	gyroStatus0;		
 	int 	gyroStatus1;		 
	
} SGyroData;

typedef struct TAG_UPS_2MS
{	
	int flgABChoose;				
    int wPulse;         			
	int stateFlag[2];				
    
} SThrDistribute;


typedef struct __InitVar
{

	int		countInt32ms;
	int		countSate;
	int		countPublic;
	int		countMode;
	int		flgPRSAM;
	int		flgGryoCalc;
	int		flg160INT;
	SGyroData		mGyroData;
	SFratemodulator mModulator;
	SThrDistribute	mThrDistribute;
	SFWarning		mFWarning;

} InitVar;

/*@
requires \valid(pIp);
assigns pIp->flg160INT, pIp->flgPRSAM, pIp->mGyroData, pIp->countSate, pIp->countPublic, pIp->countMode, pIp->countInt32ms, pIp->mFWarning, pIp->mThrDistribute.wPulse, pIp->mModulator.r, pIp->flgGryoCalc;
ensures pIp->flg160INT == 0x3333;
ensures pIp->flgPRSAM == 0x3333;
ensures pIp->mGyroData.gyroStatus0 == 0;
ensures pIp->mGyroData.gyroStatus1 == 0;
ensures pIp->countSate == 0;
ensures pIp->countPublic == 0;
ensures pIp->countMode == 0;
ensures pIp->countInt32ms == 0;
ensures pIp->mFWarning.countSPLost == 0;
ensures pIp->mFWarning.countSPSeen == 0;
ensures pIp->mFWarning.countSPset == 0;
ensures pIp->mFWarning.countUPSpc == 0;
ensures pIp->mThrDistribute.wPulse == 0x0;
ensures pIp->mModulator.r == 0;
ensures pIp->flgGryoCalc == 0;
*/
void InitVarFun(InitVar *pIp)
{

	pIp -> flg160INT = 0x3333 ;
	pIp -> flgPRSAM = 0x3333 ;

	pIp -> mGyroData.gyroStatus0 = 0 ;
	pIp -> mGyroData.gyroStatus1 = 0 ;

	pIp -> countSate    = 0 ;
	pIp -> countPublic  = 0 ;
	pIp -> countMode    = 0 ;
	pIp -> countInt32ms = 0 ;

	pIp -> mFWarning.countSPLost = 0 ;
	pIp -> mFWarning.countSPSeen = 0 ;
	pIp -> mFWarning.countSPset  = 0 ;
	pIp -> mFWarning.countUPSpc  = 0 ;

	pIp -> mThrDistribute.wPulse = 0x0 ;

	pIp -> mModulator.r = 0 ;

	pIp -> flgGryoCalc = 0 ;

	return;
}

void main40(InitVar *pIp)
{
    InitVarFun(pIp);
    // @ assert pIp -> flg160INT == 0x3333;
    // @ assert pIp -> flgPRSAM == 0x3333;
    // @ assert pIp -> mGyroData.gyroStatus0 == 0;
    // @ assert pIp -> mGyroData.gyroStatus1 == 0;
    // @ assert pIp -> countSate == 0;
    // @ assert pIp -> countPublic == 0;
    // @ assert pIp -> countMode == 0;
    // @ assert pIp -> countInt32ms == 0;
    // @ assert pIp -> mFWarning.countSPLost == 0;
    // @ assert pIp -> mFWarning.countSPSeen == 0;
    // @ assert pIp -> mFWarning.countSPset == 0;
    // @ assert pIp -> mFWarning.countUPSpc == 0;
    // @ assert pIp -> mThrDistribute.wPulse == 0x0;
    // @ assert pIp -> mModulator.r == 0;
    // @ assert pIp -> flgGryoCalc == 0;

}