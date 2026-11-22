/* BoltController_GetEnemyBoltTotal__Fv -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/10_quodrona/LEVEL_10_1541D8.c.
 */

/* LEVEL_10:1541D8 -- hands the float of the object at 0x58 of D_L01_0026B328 to
   fptoui and returns its answer. */
extern char *D_L01_0026B328;

extern int fptoui(float input);

int BoltController_GetEnemyBoltTotal__Fv(void)
{
    float *p = *(float **)(D_L01_0026B328 + 0x58);

    return fptoui(*p);
}
