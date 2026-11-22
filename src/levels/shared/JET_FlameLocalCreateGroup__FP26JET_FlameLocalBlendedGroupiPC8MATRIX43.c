/* JET_FlameLocalCreateGroup__FP26JET_FlameLocalBlendedGroupiPC8MATRIX43 -- 56 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_1E8608.c.
 */

extern void PAR_CreateGroup__FP9PAR_Groupi13PAR_BlockMode(char *, long long, int);

void JET_FlameLocalCreateGroup__FP26JET_FlameLocalBlendedGroupiPC8MATRIX43(char *record, long long other, int value)
{
    PAR_CreateGroup__FP9PAR_Groupi13PAR_BlockMode(record, other, 1);
    *(int *)(record + 0x14) = value;
}
