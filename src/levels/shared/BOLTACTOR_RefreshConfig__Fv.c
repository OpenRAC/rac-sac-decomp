/* BOLTACTOR_RefreshConfig__Fv -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_003E40.c.
 */

extern char D_L01_0026B288[];

void BALLPHYSICS_RefreshConfig__FP18BALLPHYSICS_Config(void *);

void BOLTACTOR_RefreshConfig__Fv(float a, float b, float c, float d)
{
    BALLPHYSICS_RefreshConfig__FP18BALLPHYSICS_Config(D_L01_0026B288);
}
