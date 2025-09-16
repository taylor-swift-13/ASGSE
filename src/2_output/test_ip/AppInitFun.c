
    #include "../verification_stdlib.h"
    #include "../verification_list.h"
    #include "../int_array_def.h"

    /*@ Extern Coq (Result: Assertion) */
    /*@ Extern Coq (Results: Z -> Assertion) */

        typedef struct TAG_FAULT_WARNING
{
	int CWsp;
	int CWtf;
	
    int Wsp;                      	
    int Wtf;                    
    int Wav;
    
    int flgups;						
    int flgModeChange;				
    
	int countAV;
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

    int		countPick[9];		 	
    int 	Gi[3];				 
    int 	wa[9];				 
    int 	wal[9];				 
 	int		JoinTotal;          
 	int  	gyroStatus0;		
 	int 	gyroStatus1;		 
    int 	W[3];				 
    int 	SignFlag[9] ; 		   
	int 	Rtemp[3][5];		 
	int 	stateFlag[9];		
	
} SGyroData;
typedef struct TAG_UPS_2MS
{	
	int flgABChoose;				
    int wPulse;         			
	int stateFlag[2];				
    
} SThrDistribute;
typedef struct __AppInit
{

	int * p1;
	int * p2;
	int * p3;
	int		countInt32ms;
	int		countSate;
	int		countPublic;
	int		countMode;
	int		flgPRSAM;
	int		flgGryoCalc;
	int		flg160INT;
	SGyroData			mGyroData;
	SFratemodulator 	mModulator;
	SThrDistribute		mThrDistribute;
	SFWarning			mFWarning;
} AppInit;


void DevControl(AppInit *pIp)
/*@
With pIp_p1_v pIp_p1 pIp_p2_v pIp_p2 pIp_p3_v pIp_p3 pIp_countInt32ms pIp_countSate pIp_countPublic pIp_countMode pIp_flgPRSAM pIp_flgGryoCalc pIp_flg160INT pIp_mGyroData_countPick_l pIp_mGyroData_Gi_l pIp_mGyroData_wa_l pIp_mGyroData_wal_l pIp_mGyroData_JoinTotal pIp_mGyroData_gyroStatus0 pIp_mGyroData_gyroStatus1 pIp_mGyroData_W_l pIp_mGyroData_SignFlag_l pIp_mGyroData_Rtemp_l pIp_mGyroData_stateFlag_l pIp_mModulator_u pIp_mModulator_r pIp_mModulator_Yp pIp_mModulator_Yn pIp_mThrDistribute_flgABChoose pIp_mThrDistribute_wPulse pIp_mThrDistribute_stateFlag_l pIp_mFWarning_CWsp pIp_mFWarning_CWtf pIp_mFWarning_Wsp pIp_mFWarning_Wtf pIp_mFWarning_Wav pIp_mFWarning_flgups pIp_mFWarning_flgModeChange pIp_mFWarning_countAV pIp_mFWarning_countSPLost pIp_mFWarning_countSPSeen pIp_mFWarning_countSPset pIp_mFWarning_countUPSpc
Require *(pIp->p1) == pIp_p1_v && (pIp->p1) == pIp_p1 && *(pIp->p2) == pIp_p2_v && (pIp->p2) == pIp_p2 && *(pIp->p3) == pIp_p3_v && (pIp->p3) == pIp_p3 && pIp->countInt32ms == pIp_countInt32ms && pIp->countSate == pIp_countSate && pIp->countPublic == pIp_countPublic && pIp->countMode == pIp_countMode && pIp->flgPRSAM == pIp_flgPRSAM && pIp->flgGryoCalc == pIp_flgGryoCalc && pIp->flg160INT == pIp_flg160INT && store_int_array(pIp->mGyroData.countPick,9, pIp_mGyroData_countPick_l) && store_int_array(pIp->mGyroData.Gi,3, pIp_mGyroData_Gi_l) && store_int_array(pIp->mGyroData.wa,9, pIp_mGyroData_wa_l) && store_int_array(pIp->mGyroData.wal,9, pIp_mGyroData_wal_l) && pIp->mGyroData.JoinTotal == pIp_mGyroData_JoinTotal && pIp->mGyroData.gyroStatus0 == pIp_mGyroData_gyroStatus0 && pIp->mGyroData.gyroStatus1 == pIp_mGyroData_gyroStatus1 && store_int_array(pIp->mGyroData.W,3, pIp_mGyroData_W_l) && store_int_array(pIp->mGyroData.SignFlag,9, pIp_mGyroData_SignFlag_l) && store_int_array(pIp->mGyroData.Rtemp,3, pIp_mGyroData_Rtemp_l) && store_int_array(pIp->mGyroData.stateFlag,9, pIp_mGyroData_stateFlag_l) && pIp->mModulator.u == pIp_mModulator_u && pIp->mModulator.r == pIp_mModulator_r && pIp->mModulator.Yp == pIp_mModulator_Yp && pIp->mModulator.Yn == pIp_mModulator_Yn && pIp->mThrDistribute.flgABChoose == pIp_mThrDistribute_flgABChoose && pIp->mThrDistribute.wPulse == pIp_mThrDistribute_wPulse && store_int_array(pIp->mThrDistribute.stateFlag,2, pIp_mThrDistribute_stateFlag_l) && pIp->mFWarning.CWsp == pIp_mFWarning_CWsp && pIp->mFWarning.CWtf == pIp_mFWarning_CWtf && pIp->mFWarning.Wsp == pIp_mFWarning_Wsp && pIp->mFWarning.Wtf == pIp_mFWarning_Wtf && pIp->mFWarning.Wav == pIp_mFWarning_Wav && pIp->mFWarning.flgups == pIp_mFWarning_flgups && pIp->mFWarning.flgModeChange == pIp_mFWarning_flgModeChange && pIp->mFWarning.countAV == pIp_mFWarning_countAV && pIp->mFWarning.countSPLost == pIp_mFWarning_countSPLost && pIp->mFWarning.countSPSeen == pIp_mFWarning_countSPSeen && pIp->mFWarning.countSPset == pIp_mFWarning_countSPset && pIp->mFWarning.countUPSpc == pIp_mFWarning_countUPSpc
Ensure ((pIp->p1 == pIp_p1) * (*pIp->p1 == 60306) * (pIp->p2 == pIp_p2) * (*pIp->p2 == 1) * (pIp->p3 == pIp_p3) * (*pIp->p3 == 252) * (pIp->countInt32ms == pIp_countInt32ms) * (pIp->countSate == pIp_countSate) * (pIp->countPublic == pIp_countPublic) * (pIp->countMode == pIp_countMode) * (pIp->flgPRSAM == pIp_flgPRSAM) * (pIp->flgGryoCalc == pIp_flgGryoCalc) * (pIp->flg160INT == pIp_flg160INT) * store_int_array(&pIp->mGyroData.countPick, 9, pIp_mGyroData_countPick_l) * store_int_array(&pIp->mGyroData.Gi, 3, pIp_mGyroData_Gi_l) * store_int_array(&pIp->mGyroData.wa, 9, pIp_mGyroData_wa_l) * store_int_array(&pIp->mGyroData.wal, 9, pIp_mGyroData_wal_l) * (pIp->mGyroData.JoinTotal == pIp_mGyroData_JoinTotal) * (pIp->mGyroData.gyroStatus0 == pIp_mGyroData_gyroStatus0) * (pIp->mGyroData.gyroStatus1 == pIp_mGyroData_gyroStatus1) * store_int_array(&pIp->mGyroData.W, 3, pIp_mGyroData_W_l) * store_int_array(&pIp->mGyroData.SignFlag, 9, pIp_mGyroData_SignFlag_l) * store_int_array(&pIp->mGyroData.Rtemp, 3, pIp_mGyroData_Rtemp_l) * store_int_array(&pIp->mGyroData.stateFlag, 9, pIp_mGyroData_stateFlag_l) * (pIp->mModulator.u == pIp_mModulator_u) * (pIp->mModulator.r == pIp_mModulator_r) * (pIp->mModulator.Yp == pIp_mModulator_Yp) * (pIp->mModulator.Yn == pIp_mModulator_Yn) * (pIp->mThrDistribute.flgABChoose == pIp_mThrDistribute_flgABChoose) * (pIp->mThrDistribute.wPulse == pIp_mThrDistribute_wPulse) * store_int_array(&pIp->mThrDistribute.stateFlag, 2, pIp_mThrDistribute_stateFlag_l) * (pIp->mFWarning.CWsp == pIp_mFWarning_CWsp) * (pIp->mFWarning.CWtf == pIp_mFWarning_CWtf) * (pIp->mFWarning.Wsp == pIp_mFWarning_Wsp) * (pIp->mFWarning.Wtf == pIp_mFWarning_Wtf) * (pIp->mFWarning.Wav == pIp_mFWarning_Wav) * (pIp->mFWarning.flgups == pIp_mFWarning_flgups) * (pIp->mFWarning.flgModeChange == pIp_mFWarning_flgModeChange) * (pIp->mFWarning.countAV == pIp_mFWarning_countAV) * (pIp->mFWarning.countSPLost == pIp_mFWarning_countSPLost) * (pIp->mFWarning.countSPSeen == pIp_mFWarning_countSPSeen) * (pIp->mFWarning.countSPset == pIp_mFWarning_countSPset) * (pIp->mFWarning.countUPSpc == pIp_mFWarning_countUPSpc))
*/
{
	*(pIp->p1)= 0xEB92;

	*(pIp->p2)= 0x01;

	*(pIp->p3)= 0xFC;

	return ;
}

void InitVar(AppInit *pIp)
/*@
With pIp_p1_v pIp_p1 pIp_p2_v pIp_p2 pIp_p3_v pIp_p3 pIp_countInt32ms pIp_countSate pIp_countPublic pIp_countMode pIp_flgPRSAM pIp_flgGryoCalc pIp_flg160INT pIp_mGyroData_countPick_l pIp_mGyroData_Gi_l pIp_mGyroData_wa_l pIp_mGyroData_wal_l pIp_mGyroData_JoinTotal pIp_mGyroData_gyroStatus0 pIp_mGyroData_gyroStatus1 pIp_mGyroData_W_l pIp_mGyroData_SignFlag_l pIp_mGyroData_Rtemp_l pIp_mGyroData_stateFlag_l pIp_mModulator_u pIp_mModulator_r pIp_mModulator_Yp pIp_mModulator_Yn pIp_mThrDistribute_flgABChoose pIp_mThrDistribute_wPulse pIp_mThrDistribute_stateFlag_l pIp_mFWarning_CWsp pIp_mFWarning_CWtf pIp_mFWarning_Wsp pIp_mFWarning_Wtf pIp_mFWarning_Wav pIp_mFWarning_flgups pIp_mFWarning_flgModeChange pIp_mFWarning_countAV pIp_mFWarning_countSPLost pIp_mFWarning_countSPSeen pIp_mFWarning_countSPset pIp_mFWarning_countUPSpc
Require *(pIp->p1) == pIp_p1_v && (pIp->p1) == pIp_p1 && *(pIp->p2) == pIp_p2_v && (pIp->p2) == pIp_p2 && *(pIp->p3) == pIp_p3_v && (pIp->p3) == pIp_p3 && pIp->countInt32ms == pIp_countInt32ms && pIp->countSate == pIp_countSate && pIp->countPublic == pIp_countPublic && pIp->countMode == pIp_countMode && pIp->flgPRSAM == pIp_flgPRSAM && pIp->flgGryoCalc == pIp_flgGryoCalc && pIp->flg160INT == pIp_flg160INT && store_int_array(pIp->mGyroData.countPick,9, pIp_mGyroData_countPick_l) && store_int_array(pIp->mGyroData.Gi,3, pIp_mGyroData_Gi_l) && store_int_array(pIp->mGyroData.wa,9, pIp_mGyroData_wa_l) && store_int_array(pIp->mGyroData.wal,9, pIp_mGyroData_wal_l) && pIp->mGyroData.JoinTotal == pIp_mGyroData_JoinTotal && pIp->mGyroData.gyroStatus0 == pIp_mGyroData_gyroStatus0 && pIp->mGyroData.gyroStatus1 == pIp_mGyroData_gyroStatus1 && store_int_array(pIp->mGyroData.W,3, pIp_mGyroData_W_l) && store_int_array(pIp->mGyroData.SignFlag,9, pIp_mGyroData_SignFlag_l) && store_int_array(pIp->mGyroData.Rtemp,3, pIp_mGyroData_Rtemp_l) && store_int_array(pIp->mGyroData.stateFlag,9, pIp_mGyroData_stateFlag_l) && pIp->mModulator.u == pIp_mModulator_u && pIp->mModulator.r == pIp_mModulator_r && pIp->mModulator.Yp == pIp_mModulator_Yp && pIp->mModulator.Yn == pIp_mModulator_Yn && pIp->mThrDistribute.flgABChoose == pIp_mThrDistribute_flgABChoose && pIp->mThrDistribute.wPulse == pIp_mThrDistribute_wPulse && store_int_array(pIp->mThrDistribute.stateFlag,2, pIp_mThrDistribute_stateFlag_l) && pIp->mFWarning.CWsp == pIp_mFWarning_CWsp && pIp->mFWarning.CWtf == pIp_mFWarning_CWtf && pIp->mFWarning.Wsp == pIp_mFWarning_Wsp && pIp->mFWarning.Wtf == pIp_mFWarning_Wtf && pIp->mFWarning.Wav == pIp_mFWarning_Wav && pIp->mFWarning.flgups == pIp_mFWarning_flgups && pIp->mFWarning.flgModeChange == pIp_mFWarning_flgModeChange && pIp->mFWarning.countAV == pIp_mFWarning_countAV && pIp->mFWarning.countSPLost == pIp_mFWarning_countSPLost && pIp->mFWarning.countSPSeen == pIp_mFWarning_countSPSeen && pIp->mFWarning.countSPset == pIp_mFWarning_countSPset && pIp->mFWarning.countUPSpc == pIp_mFWarning_countUPSpc
Ensure ((pIp->p1 == pIp_p1) * (*pIp->p1 == pIp_p1_v) * (pIp->p2 == pIp_p2) * (*pIp->p2 == pIp_p2_v) * (pIp->p3 == pIp_p3) * (*pIp->p3 == pIp_p3_v) * (pIp->countInt32ms == 0) * (pIp->countSate == 0) * (pIp->countPublic == 0) * (pIp->countMode == 0) * (pIp->flgPRSAM == 13107) * (pIp->flgGryoCalc == 0) * (pIp->flg160INT == 13107) * store_int_array(&pIp->mGyroData.countPick, 9, pIp_mGyroData_countPick_l) * store_int_array(&pIp->mGyroData.Gi, 3, pIp_mGyroData_Gi_l) * store_int_array(&pIp->mGyroData.wa, 9, pIp_mGyroData_wa_l) * store_int_array(&pIp->mGyroData.wal, 9, pIp_mGyroData_wal_l) * (pIp->mGyroData.JoinTotal == pIp_mGyroData_JoinTotal) * (pIp->mGyroData.gyroStatus0 == 0) * (pIp->mGyroData.gyroStatus1 == 0) * store_int_array(&pIp->mGyroData.W, 3, pIp_mGyroData_W_l) * store_int_array(&pIp->mGyroData.SignFlag, 9, pIp_mGyroData_SignFlag_l) * store_int_array(&pIp->mGyroData.Rtemp, 3, pIp_mGyroData_Rtemp_l) * store_int_array(&pIp->mGyroData.stateFlag, 9, pIp_mGyroData_stateFlag_l) * (pIp->mModulator.u == pIp_mModulator_u) * (pIp->mModulator.r == 0) * (pIp->mModulator.Yp == pIp_mModulator_Yp) * (pIp->mModulator.Yn == pIp_mModulator_Yn) * (pIp->mThrDistribute.flgABChoose == pIp_mThrDistribute_flgABChoose) * (pIp->mThrDistribute.wPulse == 0) * store_int_array(&pIp->mThrDistribute.stateFlag, 2, pIp_mThrDistribute_stateFlag_l) * (pIp->mFWarning.CWsp == pIp_mFWarning_CWsp) * (pIp->mFWarning.CWtf == pIp_mFWarning_CWtf) * (pIp->mFWarning.Wsp == pIp_mFWarning_Wsp) * (pIp->mFWarning.Wtf == pIp_mFWarning_Wtf) * (pIp->mFWarning.Wav == pIp_mFWarning_Wav) * (pIp->mFWarning.flgups == pIp_mFWarning_flgups) * (pIp->mFWarning.flgModeChange == pIp_mFWarning_flgModeChange) * (pIp->mFWarning.countAV == pIp_mFWarning_countAV) * (pIp->mFWarning.countSPLost == 0) * (pIp->mFWarning.countSPSeen == 0) * (pIp->mFWarning.countSPset == 0) * (pIp->mFWarning.countUPSpc == 0))
*/
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
void AppInitFun(AppInit *pIp)

/*@
With pIp_p1_v pIp_p1 pIp_p2_v pIp_p2 pIp_p3_v pIp_p3 pIp_countInt32ms pIp_countSate pIp_countPublic pIp_countMode pIp_flgPRSAM pIp_flgGryoCalc pIp_flg160INT pIp_mGyroData_countPick_l pIp_mGyroData_Gi_l pIp_mGyroData_wa_l pIp_mGyroData_wal_l pIp_mGyroData_JoinTotal pIp_mGyroData_gyroStatus0 pIp_mGyroData_gyroStatus1 pIp_mGyroData_W_l pIp_mGyroData_SignFlag_l pIp_mGyroData_Rtemp_l pIp_mGyroData_stateFlag_l pIp_mModulator_u pIp_mModulator_r pIp_mModulator_Yp pIp_mModulator_Yn pIp_mThrDistribute_flgABChoose pIp_mThrDistribute_wPulse pIp_mThrDistribute_stateFlag_l pIp_mFWarning_CWsp pIp_mFWarning_CWtf pIp_mFWarning_Wsp pIp_mFWarning_Wtf pIp_mFWarning_Wav pIp_mFWarning_flgups pIp_mFWarning_flgModeChange pIp_mFWarning_countAV pIp_mFWarning_countSPLost pIp_mFWarning_countSPSeen pIp_mFWarning_countSPset pIp_mFWarning_countUPSpc
Require *(pIp->p1) == pIp_p1_v && (pIp->p1) == pIp_p1 && *(pIp->p2) == pIp_p2_v && (pIp->p2) == pIp_p2 && *(pIp->p3) == pIp_p3_v && (pIp->p3) == pIp_p3 && pIp->countInt32ms == pIp_countInt32ms && pIp->countSate == pIp_countSate && pIp->countPublic == pIp_countPublic && pIp->countMode == pIp_countMode && pIp->flgPRSAM == pIp_flgPRSAM && pIp->flgGryoCalc == pIp_flgGryoCalc && pIp->flg160INT == pIp_flg160INT && store_int_array(pIp->mGyroData.countPick,9, pIp_mGyroData_countPick_l) && store_int_array(pIp->mGyroData.Gi,3, pIp_mGyroData_Gi_l) && store_int_array(pIp->mGyroData.wa,9, pIp_mGyroData_wa_l) && store_int_array(pIp->mGyroData.wal,9, pIp_mGyroData_wal_l) && pIp->mGyroData.JoinTotal == pIp_mGyroData_JoinTotal && pIp->mGyroData.gyroStatus0 == pIp_mGyroData_gyroStatus0 && pIp->mGyroData.gyroStatus1 == pIp_mGyroData_gyroStatus1 && store_int_array(pIp->mGyroData.W,3, pIp_mGyroData_W_l) && store_int_array(pIp->mGyroData.SignFlag,9, pIp_mGyroData_SignFlag_l) && store_int_array(pIp->mGyroData.Rtemp,3, pIp_mGyroData_Rtemp_l) && store_int_array(pIp->mGyroData.stateFlag,9, pIp_mGyroData_stateFlag_l) && pIp->mModulator.u == pIp_mModulator_u && pIp->mModulator.r == pIp_mModulator_r && pIp->mModulator.Yp == pIp_mModulator_Yp && pIp->mModulator.Yn == pIp_mModulator_Yn && pIp->mThrDistribute.flgABChoose == pIp_mThrDistribute_flgABChoose && pIp->mThrDistribute.wPulse == pIp_mThrDistribute_wPulse && store_int_array(pIp->mThrDistribute.stateFlag,2, pIp_mThrDistribute_stateFlag_l) && pIp->mFWarning.CWsp == pIp_mFWarning_CWsp && pIp->mFWarning.CWtf == pIp_mFWarning_CWtf && pIp->mFWarning.Wsp == pIp_mFWarning_Wsp && pIp->mFWarning.Wtf == pIp_mFWarning_Wtf && pIp->mFWarning.Wav == pIp_mFWarning_Wav && pIp->mFWarning.flgups == pIp_mFWarning_flgups && pIp->mFWarning.flgModeChange == pIp_mFWarning_flgModeChange && pIp->mFWarning.countAV == pIp_mFWarning_countAV && pIp->mFWarning.countSPLost == pIp_mFWarning_countSPLost && pIp->mFWarning.countSPSeen == pIp_mFWarning_countSPSeen && pIp->mFWarning.countSPset == pIp_mFWarning_countSPset && pIp->mFWarning.countUPSpc == pIp_mFWarning_countUPSpc
Ensure (*pIp_p1 == 60306 && *pIp_p2 == 1 && *pIp_p3 == 252 && pIp->countInt32ms == 0 && pIp->countSate == 0 && pIp->countPublic == 0 && pIp->countMode == 0 && pIp->flgPRSAM == 13107 && pIp->flgGryoCalc == 0 && pIp->flg160INT == 13107 && pIp->mGyroData.gyroStatus0 == 0 && pIp->mGyroData.gyroStatus1 == 0 && pIp->mModulator.r == 0 && pIp->mThrDistribute.wPulse == 0 && pIp->mFWarning.countSPLost == 0 && pIp->mFWarning.countSPSeen == 0 && pIp->mFWarning.countSPset == 0 && pIp->mFWarning.countUPSpc == 0 && (pIp->p1 == pIp_p1) * (pIp->p2 == pIp_p2) * (pIp->p3 == pIp_p3) * store_int_array(&pIp->mGyroData.countPick, 9, pIp_mGyroData_countPick_l) * store_int_array(&pIp->mGyroData.Gi, 3, pIp_mGyroData_Gi_l) * store_int_array(&pIp->mGyroData.wa, 9, pIp_mGyroData_wa_l) * store_int_array(&pIp->mGyroData.wal, 9, pIp_mGyroData_wal_l) * (pIp->mGyroData.JoinTotal == pIp_mGyroData_JoinTotal) * store_int_array(&pIp->mGyroData.W, 3, pIp_mGyroData_W_l) * store_int_array(&pIp->mGyroData.SignFlag, 9, pIp_mGyroData_SignFlag_l) * store_int_array(&pIp->mGyroData.Rtemp, 3, pIp_mGyroData_Rtemp_l) * store_int_array(&pIp->mGyroData.stateFlag, 9, pIp_mGyroData_stateFlag_l) * (pIp->mModulator.u == pIp_mModulator_u) * (pIp->mModulator.Yp == pIp_mModulator_Yp) * (pIp->mModulator.Yn == pIp_mModulator_Yn) * (pIp->mThrDistribute.flgABChoose == pIp_mThrDistribute_flgABChoose) * store_int_array(&pIp->mThrDistribute.stateFlag, 2, pIp_mThrDistribute_stateFlag_l) * (pIp->mFWarning.CWsp == pIp_mFWarning_CWsp) * (pIp->mFWarning.CWtf == pIp_mFWarning_CWtf) * (pIp->mFWarning.Wsp == pIp_mFWarning_Wsp) * (pIp->mFWarning.Wtf == pIp_mFWarning_Wtf) * (pIp->mFWarning.Wav == pIp_mFWarning_Wav) * (pIp->mFWarning.flgups == pIp_mFWarning_flgups) * (pIp->mFWarning.flgModeChange == pIp_mFWarning_flgModeChange) * (pIp->mFWarning.countAV == pIp_mFWarning_countAV))
*/
{

    InitVar(pIp);

	DevControl(pIp);

	return;
}