typedef struct __CheckCal
{
        int pkv[10];
        int len;
        int chksum;

} CheckCal;

void CheckCalFun4(CheckCal *pIp){
        int i = 0;
        int chksum = 0;

        for (; i < pIp->len; i++){
            chksum = chksum + pIp->pkv[i];
        }

        pIp->chksum = chksum;

}