/* LEVEL_ResetBogBackup__Fv -- 72 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_018800.c.
 */

extern char *D_L01_0024D44C;
extern char *G_UberBOG;
extern void *memset(void *, int, unsigned int);

void LEVEL_ResetBogBackup__Fv(void)
{
    unsigned int count = (*(int *)(G_UberBOG + 0x48) + 31U) & ~31U;
    memset(*(void **)(D_L01_0024D44C + 0xc), 0, count >> 3);
}
