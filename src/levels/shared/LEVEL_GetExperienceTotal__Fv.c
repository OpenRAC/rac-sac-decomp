/* LEVEL_GetExperienceTotal__Fv -- 68 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Indexes a global table with a helper result and a global scale.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_018130.c.
 */

extern int GLOBALVARS_IsInReplayMode__Fv(void);
extern int G_levelId;
extern int D_L01_00293C18[];

int LEVEL_GetExperienceTotal__Fv(void)
{
    char *base;
    int value;

    base = (char *)D_L01_00293C18;
    value = GLOBALVARS_IsInReplayMode__Fv();
    return *(int *)(base + ((value << 2) + (G_levelId << 3)));
}
