/* CALLBACKQUEUE_Init__FP19tCALLBACKQUEUE_DATA -- 68 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_1318D0.c.
 */

extern void *memset(void *, int, unsigned int);

void CALLBACKQUEUE_Init__FP19tCALLBACKQUEUE_DATA(unsigned int *record)
{
    memset(record + 1, 0, 0x80);
    memset(record + 0x21, 0, 0x80);
    *record = 0;
}
