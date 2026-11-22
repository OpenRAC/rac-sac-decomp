/* GCSENEMY_MotorReset__FP14GCSENEMY_Motor -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/15_giant_clank_metalis/LEVEL_15_0FCF28.c.
 */

void GCSENEMY_MotorReset__FP14GCSENEMY_Motor(char *object)
{
    *(int *)(object + 0x108) = 0;
    *(int *)(object + 0x10C) = 0;
}
