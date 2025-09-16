#include <stdlib.h>
//Zephyr slist rev_append
struct sys_slist_t {
    struct sys_slist_t *next;
};


struct sys_slist_t *main15(struct sys_slist_t *p, struct sys_slist_t *q)
{
    struct sys_slist_t *w, *t, *v;
    w = q;
    v = p;
   
    while (v) {
      t = v->next;
      v->next = w;
      w = v;
      v = t;
    }
    /*@ assert p == \at(p,Pre); */
    /*@ assert q == \at(q,Pre); */
    return w;
}