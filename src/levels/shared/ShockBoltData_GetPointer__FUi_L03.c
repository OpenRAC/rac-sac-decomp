/* ShockBoltData_GetPointer__FUi -- 56 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the table record for a byte key when its first word matches and its
 * flag is set.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_16B640.c.
 */

extern unsigned int D_L03_003DCFD0[];

unsigned int *ShockBoltData_GetPointer__FUi(unsigned int value)
{
    unsigned int index;
    unsigned int *entry;

    index = value & 0xff;
    entry = (unsigned int *)((char *)D_L03_003DCFD0 + index * 0x6c);
    if (*entry == value && entry[26] != 0) {
        return entry;
    }
    return 0;
}
