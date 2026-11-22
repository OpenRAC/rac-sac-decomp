/* CrateShared_TroupeRegister__FP18CrateShared_Troupe -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/CORE/behaviors/CrateShared/LEVEL_01_1CBA28.c.
 */

struct Holder_1CBA28 {
    char pad_00[0xC];
    char *current;
};

extern struct Holder_1CBA28 g_crateShared;

void CrateShared_TroupeRegister__FP18CrateShared_Troupe(char *object)
{
    struct Holder_1CBA28 *holder = &g_crateShared;
    *(char **)(object + 0x3C) = holder->current;
    holder->current = object;
}
