/* LEVEL_GetBackupMobyMatrix__FPC4Moby -- 48 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0187D0.c.
 */

extern int *D_L01_0024D44C;
extern char *G_UberBOG;

int LEVEL_GetBackupMobyMatrix__FPC4Moby(int value)
{
    int origin = *(int *)(G_UberBOG + 0x44);
    return *D_L01_0024D44C + ((value - origin) >> 7) * 0x50;
}
