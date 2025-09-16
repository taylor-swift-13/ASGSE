
    #include "../verification_stdlib.h"
    #include "../verification_list.h"
    #include "../int_array_def.h"

    /*@ Extern Coq (Result: Assertion) */
    /*@ Extern Coq (Results: Z -> Assertion) */

        typedef struct __CheckCal
{

	int		len;
	int		*pkv;
	int     chksum;
	
} CheckCal;

void goo23(CheckCal *pIp)

/*@
With pIp_len pIp_pkv_v pIp_pkv pIp_chksum
Require pIp->len == pIp_len && *(pIp->pkv) == pIp_pkv_v && (pIp->pkv) == pIp_pkv && pIp->chksum == pIp_chksum
Ensure emp
*/{

	int i = 0;
	int chksum = 0;

	for(; i< pIp -> len; i++)
	{
	    chksum = chksum + pIp -> pkv[i];
	}

	
	
	


	pIp->chksum = chksum;


	return;
}