
    #include "../verification_stdlib.h"
    #include "../verification_list.h"
    #include "../int_array_def.h"

    /*@ Extern Coq (Result: Assertion) */
    /*@ Extern Coq (Results: Z -> Assertion) */

        typedef struct __TripleAbsMax
{
    int abs[3];
    int tmax;
    int* ret;
} TripleAbsMax;


void TripleAbsMaxFun(TripleAbsMax *pIp)
/*@
With pIp_abs_l pIp_tmax pIp_ret_v pIp_ret
Require store_int_array(pIp->abs,3, pIp_abs_l) && pIp->tmax == pIp_tmax && *(pIp->ret) == pIp_ret_v && (pIp->ret) == pIp_ret
Ensure (-pIp_abs_l[2] <= pIp_abs_l[1] && pIp_abs_l[0] <= pIp_abs_l[1] && pIp_abs_l[2] < 0 && pIp_abs_l[1] >= 0 && pIp_abs_l[0] >= 0 && store_int_array(&pIp->abs, 3, pIp_abs_l) * (pIp->tmax == pIp_abs_l[1]) * (pIp->ret == pIp_ret) * (*pIp_ret == pIp_abs_l[1])) || (-pIp_abs_l[2] <= pIp_abs_l[1] && -pIp_abs_l[0] <= pIp_abs_l[1] && pIp_abs_l[2] < 0 && pIp_abs_l[1] >= 0 && pIp_abs_l[0] < 0 && store_int_array(&pIp->abs, 3, pIp_abs_l) * (pIp->tmax == pIp_abs_l[1]) * (pIp->ret == pIp_ret) * (*pIp_ret == pIp_abs_l[1])) || (-pIp_abs_l[2] <= -pIp_abs_l[1] && -pIp_abs_l[0] <= -pIp_abs_l[1] && pIp_abs_l[2] < 0 && pIp_abs_l[1] < 0 && pIp_abs_l[0] < 0 && store_int_array(&pIp->abs, 3, pIp_abs_l) * (pIp->tmax == -pIp_abs_l[1]) * (pIp->ret == pIp_ret) * (*pIp_ret == -pIp_abs_l[1])) || (-pIp_abs_l[2] <= -pIp_abs_l[1] && pIp_abs_l[0] <= -pIp_abs_l[1] && pIp_abs_l[2] < 0 && pIp_abs_l[1] < 0 && pIp_abs_l[0] >= 0 && store_int_array(&pIp->abs, 3, pIp_abs_l) * (pIp->tmax == -pIp_abs_l[1]) * (pIp->ret == pIp_ret) * (*pIp_ret == -pIp_abs_l[1])) || (pIp_abs_l[2] <= -pIp_abs_l[1] && pIp_abs_l[0] <= -pIp_abs_l[1] && pIp_abs_l[2] >= 0 && pIp_abs_l[1] < 0 && pIp_abs_l[0] >= 0 && store_int_array(&pIp->abs, 3, pIp_abs_l) * (pIp->tmax == -pIp_abs_l[1]) * (pIp->ret == pIp_ret) * (*pIp_ret == -pIp_abs_l[1])) || (pIp_abs_l[2] <= -pIp_abs_l[1] && -pIp_abs_l[0] <= -pIp_abs_l[1] && pIp_abs_l[2] >= 0 && pIp_abs_l[1] < 0 && pIp_abs_l[0] < 0 && store_int_array(&pIp->abs, 3, pIp_abs_l) * (pIp->tmax == -pIp_abs_l[1]) * (pIp->ret == pIp_ret) * (*pIp_ret == -pIp_abs_l[1])) || (pIp_abs_l[2] <= pIp_abs_l[1] && -pIp_abs_l[0] <= pIp_abs_l[1] && pIp_abs_l[2] >= 0 && pIp_abs_l[1] >= 0 && pIp_abs_l[0] < 0 && store_int_array(&pIp->abs, 3, pIp_abs_l) * (pIp->tmax == pIp_abs_l[1]) * (pIp->ret == pIp_ret) * (*pIp_ret == pIp_abs_l[1])) || (pIp_abs_l[2] <= pIp_abs_l[1] && pIp_abs_l[0] <= pIp_abs_l[1] && pIp_abs_l[2] >= 0 && pIp_abs_l[1] >= 0 && pIp_abs_l[0] >= 0 && store_int_array(&pIp->abs, 3, pIp_abs_l) * (pIp->tmax == pIp_abs_l[1]) * (pIp->ret == pIp_ret) * (*pIp_ret == pIp_abs_l[1])) || (-pIp_abs_l[2] <= pIp_abs_l[0] && pIp_abs_l[0] > pIp_abs_l[1] && pIp_abs_l[2] < 0 && pIp_abs_l[1] >= 0 && pIp_abs_l[0] >= 0 && store_int_array(&pIp->abs, 3, pIp_abs_l) * (pIp->tmax == pIp_abs_l[0]) * (pIp->ret == pIp_ret) * (*pIp_ret == pIp_abs_l[0])) || (-pIp_abs_l[2] <= -pIp_abs_l[0] && -pIp_abs_l[0] > pIp_abs_l[1] && pIp_abs_l[2] < 0 && pIp_abs_l[1] >= 0 && pIp_abs_l[0] < 0 && store_int_array(&pIp->abs, 3, pIp_abs_l) * (pIp->tmax == -pIp_abs_l[0]) * (pIp->ret == pIp_ret) * (*pIp_ret == -pIp_abs_l[0])) || (-pIp_abs_l[2] <= -pIp_abs_l[0] && -pIp_abs_l[0] > -pIp_abs_l[1] && pIp_abs_l[2] < 0 && pIp_abs_l[1] < 0 && pIp_abs_l[0] < 0 && store_int_array(&pIp->abs, 3, pIp_abs_l) * (pIp->tmax == -pIp_abs_l[0]) * (pIp->ret == pIp_ret) * (*pIp_ret == -pIp_abs_l[0])) || (-pIp_abs_l[2] <= pIp_abs_l[0] && pIp_abs_l[0] > -pIp_abs_l[1] && pIp_abs_l[2] < 0 && pIp_abs_l[1] < 0 && pIp_abs_l[0] >= 0 && store_int_array(&pIp->abs, 3, pIp_abs_l) * (pIp->tmax == pIp_abs_l[0]) * (pIp->ret == pIp_ret) * (*pIp_ret == pIp_abs_l[0])) || (pIp_abs_l[2] <= pIp_abs_l[0] && pIp_abs_l[0] > -pIp_abs_l[1] && pIp_abs_l[2] >= 0 && pIp_abs_l[1] < 0 && pIp_abs_l[0] >= 0 && store_int_array(&pIp->abs, 3, pIp_abs_l) * (pIp->tmax == pIp_abs_l[0]) * (pIp->ret == pIp_ret) * (*pIp_ret == pIp_abs_l[0])) || (pIp_abs_l[2] <= -pIp_abs_l[0] && -pIp_abs_l[0] > -pIp_abs_l[1] && pIp_abs_l[2] >= 0 && pIp_abs_l[1] < 0 && pIp_abs_l[0] < 0 && store_int_array(&pIp->abs, 3, pIp_abs_l) * (pIp->tmax == -pIp_abs_l[0]) * (pIp->ret == pIp_ret) * (*pIp_ret == -pIp_abs_l[0])) || (pIp_abs_l[2] <= -pIp_abs_l[0] && -pIp_abs_l[0] > pIp_abs_l[1] && pIp_abs_l[2] >= 0 && pIp_abs_l[1] >= 0 && pIp_abs_l[0] < 0 && store_int_array(&pIp->abs, 3, pIp_abs_l) * (pIp->tmax == -pIp_abs_l[0]) * (pIp->ret == pIp_ret) * (*pIp_ret == -pIp_abs_l[0])) || (pIp_abs_l[2] <= pIp_abs_l[0] && pIp_abs_l[0] > pIp_abs_l[1] && pIp_abs_l[2] >= 0 && pIp_abs_l[1] >= 0 && pIp_abs_l[0] >= 0 && store_int_array(&pIp->abs, 3, pIp_abs_l) * (pIp->tmax == pIp_abs_l[0]) * (pIp->ret == pIp_ret) * (*pIp_ret == pIp_abs_l[0])) || (pIp_abs_l[2] > pIp_abs_l[0] && pIp_abs_l[0] > pIp_abs_l[1] && pIp_abs_l[2] >= 0 && pIp_abs_l[1] >= 0 && pIp_abs_l[0] >= 0 && store_int_array(&pIp->abs, 3, pIp_abs_l) * (pIp->tmax == pIp_abs_l[2]) * (pIp->ret == pIp_ret) * (*pIp_ret == pIp_abs_l[2])) || (pIp_abs_l[2] > -pIp_abs_l[0] && -pIp_abs_l[0] > pIp_abs_l[1] && pIp_abs_l[2] >= 0 && pIp_abs_l[1] >= 0 && pIp_abs_l[0] < 0 && store_int_array(&pIp->abs, 3, pIp_abs_l) * (pIp->tmax == pIp_abs_l[2]) * (pIp->ret == pIp_ret) * (*pIp_ret == pIp_abs_l[2])) || (pIp_abs_l[2] > -pIp_abs_l[0] && -pIp_abs_l[0] > -pIp_abs_l[1] && pIp_abs_l[2] >= 0 && pIp_abs_l[1] < 0 && pIp_abs_l[0] < 0 && store_int_array(&pIp->abs, 3, pIp_abs_l) * (pIp->tmax == pIp_abs_l[2]) * (pIp->ret == pIp_ret) * (*pIp_ret == pIp_abs_l[2])) || (pIp_abs_l[2] > pIp_abs_l[0] && pIp_abs_l[0] > -pIp_abs_l[1] && pIp_abs_l[2] >= 0 && pIp_abs_l[1] < 0 && pIp_abs_l[0] >= 0 && store_int_array(&pIp->abs, 3, pIp_abs_l) * (pIp->tmax == pIp_abs_l[2]) * (pIp->ret == pIp_ret) * (*pIp_ret == pIp_abs_l[2])) || (-pIp_abs_l[2] > pIp_abs_l[0] && pIp_abs_l[0] > -pIp_abs_l[1] && pIp_abs_l[2] < 0 && pIp_abs_l[1] < 0 && pIp_abs_l[0] >= 0 && store_int_array(&pIp->abs, 3, pIp_abs_l) * (pIp->tmax == -pIp_abs_l[2]) * (pIp->ret == pIp_ret) * (*pIp_ret == -pIp_abs_l[2])) || (-pIp_abs_l[2] > -pIp_abs_l[0] && -pIp_abs_l[0] > -pIp_abs_l[1] && pIp_abs_l[2] < 0 && pIp_abs_l[1] < 0 && pIp_abs_l[0] < 0 && store_int_array(&pIp->abs, 3, pIp_abs_l) * (pIp->tmax == -pIp_abs_l[2]) * (pIp->ret == pIp_ret) * (*pIp_ret == -pIp_abs_l[2])) || (-pIp_abs_l[2] > -pIp_abs_l[0] && -pIp_abs_l[0] > pIp_abs_l[1] && pIp_abs_l[2] < 0 && pIp_abs_l[1] >= 0 && pIp_abs_l[0] < 0 && store_int_array(&pIp->abs, 3, pIp_abs_l) * (pIp->tmax == -pIp_abs_l[2]) * (pIp->ret == pIp_ret) * (*pIp_ret == -pIp_abs_l[2])) || (-pIp_abs_l[2] > pIp_abs_l[0] && pIp_abs_l[0] > pIp_abs_l[1] && pIp_abs_l[2] < 0 && pIp_abs_l[1] >= 0 && pIp_abs_l[0] >= 0 && store_int_array(&pIp->abs, 3, pIp_abs_l) * (pIp->tmax == -pIp_abs_l[2]) * (pIp->ret == pIp_ret) * (*pIp_ret == -pIp_abs_l[2])) || (pIp_abs_l[2] > pIp_abs_l[1] && pIp_abs_l[0] <= pIp_abs_l[1] && pIp_abs_l[2] >= 0 && pIp_abs_l[1] >= 0 && pIp_abs_l[0] >= 0 && store_int_array(&pIp->abs, 3, pIp_abs_l) * (pIp->tmax == pIp_abs_l[2]) * (pIp->ret == pIp_ret) * (*pIp_ret == pIp_abs_l[2])) || (pIp_abs_l[2] > pIp_abs_l[1] && -pIp_abs_l[0] <= pIp_abs_l[1] && pIp_abs_l[2] >= 0 && pIp_abs_l[1] >= 0 && pIp_abs_l[0] < 0 && store_int_array(&pIp->abs, 3, pIp_abs_l) * (pIp->tmax == pIp_abs_l[2]) * (pIp->ret == pIp_ret) * (*pIp_ret == pIp_abs_l[2])) || (pIp_abs_l[2] > -pIp_abs_l[1] && -pIp_abs_l[0] <= -pIp_abs_l[1] && pIp_abs_l[2] >= 0 && pIp_abs_l[1] < 0 && pIp_abs_l[0] < 0 && store_int_array(&pIp->abs, 3, pIp_abs_l) * (pIp->tmax == pIp_abs_l[2]) * (pIp->ret == pIp_ret) * (*pIp_ret == pIp_abs_l[2])) || (pIp_abs_l[2] > -pIp_abs_l[1] && pIp_abs_l[0] <= -pIp_abs_l[1] && pIp_abs_l[2] >= 0 && pIp_abs_l[1] < 0 && pIp_abs_l[0] >= 0 && store_int_array(&pIp->abs, 3, pIp_abs_l) * (pIp->tmax == pIp_abs_l[2]) * (pIp->ret == pIp_ret) * (*pIp_ret == pIp_abs_l[2])) || (-pIp_abs_l[2] > -pIp_abs_l[1] && pIp_abs_l[0] <= -pIp_abs_l[1] && pIp_abs_l[2] < 0 && pIp_abs_l[1] < 0 && pIp_abs_l[0] >= 0 && store_int_array(&pIp->abs, 3, pIp_abs_l) * (pIp->tmax == -pIp_abs_l[2]) * (pIp->ret == pIp_ret) * (*pIp_ret == -pIp_abs_l[2])) || (-pIp_abs_l[2] > -pIp_abs_l[1] && -pIp_abs_l[0] <= -pIp_abs_l[1] && pIp_abs_l[2] < 0 && pIp_abs_l[1] < 0 && pIp_abs_l[0] < 0 && store_int_array(&pIp->abs, 3, pIp_abs_l) * (pIp->tmax == -pIp_abs_l[2]) * (pIp->ret == pIp_ret) * (*pIp_ret == -pIp_abs_l[2])) || (-pIp_abs_l[2] > pIp_abs_l[1] && -pIp_abs_l[0] <= pIp_abs_l[1] && pIp_abs_l[2] < 0 && pIp_abs_l[1] >= 0 && pIp_abs_l[0] < 0 && store_int_array(&pIp->abs, 3, pIp_abs_l) * (pIp->tmax == -pIp_abs_l[2]) * (pIp->ret == pIp_ret) * (*pIp_ret == -pIp_abs_l[2])) || (-pIp_abs_l[2] > pIp_abs_l[1] && pIp_abs_l[0] <= pIp_abs_l[1] && pIp_abs_l[2] < 0 && pIp_abs_l[1] >= 0 && pIp_abs_l[0] >= 0 && store_int_array(&pIp->abs, 3, pIp_abs_l) * (pIp->tmax == -pIp_abs_l[2]) * (pIp->ret == pIp_ret) * (*pIp_ret == -pIp_abs_l[2]))
*/
{
    
    int absfx1 = pIp->abs[0];
    int absfy2 = pIp->abs[1];
    int absfz3 = pIp->abs[2];

    if (pIp->abs[0] < 0)
    {
        absfx1 = -pIp->abs[0];
    }

    if (pIp->abs[1] < 0)
    {
        absfy2 = -pIp->abs[1];
    }

    if (pIp->abs[2] < 0)
    {
        absfz3 = -pIp->abs[2];
    }

    if (absfx1 > absfy2)
    {
        pIp->tmax = absfx1;
    }
    else
    {
        pIp->tmax = absfy2;
    }

    if (absfz3 > pIp->tmax)
    {
        pIp->tmax = absfz3;
    }

    *(pIp->ret) = pIp->tmax;


}
void main2(TripleAbsMax *pIp)

/*@
With pIp_abs_l pIp_tmax pIp_ret_v pIp_ret
Require store_int_array(pIp->abs,3, pIp_abs_l) && pIp->tmax == pIp_tmax && *(pIp->ret) == pIp_ret_v && (pIp->ret) == pIp_ret
Ensure emp
*/{

	pIp -> abs[0] = 1;
	pIp -> abs[1] = 2;
	pIp -> abs[2] = -3;

	TripleAbsMaxFun(pIp);

    
}