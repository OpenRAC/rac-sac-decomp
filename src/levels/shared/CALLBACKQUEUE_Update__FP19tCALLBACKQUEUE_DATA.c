/* CALLBACKQUEUE_Update__FP19tCALLBACKQUEUE_DATA -- 108 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Calls each queued callback once with its paired value, then clears the
 * count.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_131918.c.
 */

typedef struct { unsigned int count; void (*cb[32])(unsigned int); unsigned int val[32]; } L;
void CALLBACKQUEUE_Update__FP19tCALLBACKQUEUE_DATA(L *l){ unsigned int i; for (i = 0; i < l->count; i++) l->cb[i](l->val[i]); l->count = 0; }
