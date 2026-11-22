/* func_L01_16BCC0 -- 76 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Resets the object's two sub records and, when asked, the third one at 0xCC.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0EFB00.c.
 */

extern void BLAST_RefreshConfig__FP17BLAST_GroupConfig(void *p);
extern void BLAST_RefreshConfig__FP19BLAST_EmitterConfig(void *p);
extern void FLASH_RefreshConfig__FP19FLASH_EmitterConfig(void *p);

void func_L01_16BCC0(char *obj, int all)
{
    BLAST_RefreshConfig__FP17BLAST_GroupConfig(obj + 0xB0);
    BLAST_RefreshConfig__FP19BLAST_EmitterConfig(obj + 0x7C);
    if (all)
        FLASH_RefreshConfig__FP19FLASH_EmitterConfig(obj + 0xCC);
}
