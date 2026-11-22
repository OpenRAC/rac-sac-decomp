/* aglPs2RenderEndState__FP13sceVif1Packet -- 44 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_04E7A8.c.
 */

extern void sceVif1PkCloseGifTag(void *value);
extern void sceVif1PkCloseDirectCode(void *value);

void aglPs2RenderEndState__FP13sceVif1Packet(void *value) {
    sceVif1PkCloseGifTag(value);
    sceVif1PkCloseDirectCode(value);
}
