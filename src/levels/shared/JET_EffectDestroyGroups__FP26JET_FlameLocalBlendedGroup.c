/* JET_EffectDestroyGroups__FP26JET_FlameLocalBlendedGroup -- 64 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Runs a helper on two consecutive 0x18-byte records.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/08_dayni_moon/LEVEL_08_2300A8.c.
 */

extern void JET_FlameLocalDestroyGroup__FP26JET_FlameLocalBlendedGroup(char *);

void JET_EffectDestroyGroups__FP26JET_FlameLocalBlendedGroup(char *record)
{
    char *end = record + 0x30;
    do {
        JET_FlameLocalDestroyGroup__FP26JET_FlameLocalBlendedGroup(record);
        record += 0x18;
    } while ((int)record < (int)end);
}
