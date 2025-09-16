//svcomp_id_trans
/*@
  requires nlen == idBitLength / 32;
  requires idBitLength >= 0;
  requires material_length >= 0;
*/
void hoo20(int idBitLength,int material_length,int nlen){
    int j = 0;

    //pre-condition

    //loop-body
    /*@
    */
    while((j < idBitLength / 8) && (j < material_length)){
       j = j + 1;
    }

    //post-condition
    /*@ assert (j / 4) <= nlen; */
}