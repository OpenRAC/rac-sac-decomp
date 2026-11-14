/* SCRNARENA_Render__Fv -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

typedef struct PAUSEMENU tPAUSEMENU;

extern tPAUSEMENU D_L14_3D4DC8;

extern void PAUSEMENU_Render__FP10tPAUSEMENU(tPAUSEMENU *menu);

void SCRNARENA_Render__Fv(void)
{
    PAUSEMENU_Render__FP10tPAUSEMENU(&D_L14_3D4DC8);
}
