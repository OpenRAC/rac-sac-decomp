/* func_L01_16B0A0 -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0EEF00.c.
 */

extern void FLASH_RefreshConfig__FP19FLASH_EmitterConfig(char *);

void func_L01_16B0A0(char *item, long enabled)
{
    if (enabled != 0)
        FLASH_RefreshConfig__FP19FLASH_EmitterConfig(item + 0xd4);
}
