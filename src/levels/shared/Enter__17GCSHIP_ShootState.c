/* Enter__17GCSHIP_ShootState -- 60 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * While the mode word is 1, starts effect 3 with a zero start and a 0.15 rate.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_1377B8.c.
 */

extern int D_L24_003A5D5C;
extern void GCSHIP_AnimBlendActive__F10GCS_AnimIDff(int index, float start, float rate);

void Enter__17GCSHIP_ShootState(void)
{
    if (D_L24_003A5D5C == 1) {
        GCSHIP_AnimBlendActive__F10GCS_AnimIDff(3, 0.0f, 0.15f);
    }
}
