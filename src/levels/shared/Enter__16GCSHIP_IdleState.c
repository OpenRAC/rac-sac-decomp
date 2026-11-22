/* Enter__16GCSHIP_IdleState -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Starts effect 2 with a zero start and a 0.15 rate.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_137768.c.
 */

extern void GCSHIP_AnimBlendActive__F10GCS_AnimIDff(int index, float start, float rate);

void Enter__16GCSHIP_IdleState(void)
{
    GCSHIP_AnimBlendActive__F10GCS_AnimIDff(2, 0.0f, 0.15f);
}
