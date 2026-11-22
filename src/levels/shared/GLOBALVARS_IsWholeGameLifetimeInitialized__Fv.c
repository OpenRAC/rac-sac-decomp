/* GLOBALVARS_IsWholeGameLifetimeInitialized__Fv -- 40 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_002F28.c.
 */

extern int pGV[];

int GLOBALVARS_IsWholeGameLifetimeInitialized__Fv(void)
{
    unsigned char *p = (unsigned char *)pGV[0];

    if (p != 0) {
        if (*p != 0)
            return 1;
    }
    return 0;
}
