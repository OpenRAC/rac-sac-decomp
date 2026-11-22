/* LOCDBASE_StringToNMixedCase__FPcUi -- 184 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Capitalizes word starts in a byte string.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_132300.c.
 */

void LOCDBASE_StringToNMixedCase__FPcUi(unsigned char *text, unsigned int count)
{
    unsigned int index = 0;
    int capitalize = 1;
    while (index < count) {
        unsigned int value = *text;
        if (value == ' ' || value == '-' || value == '/') {
            capitalize = 1;
        } else if (!((unsigned int)(value - 'a') < 26 || value > 0xdf)) {
            if ((unsigned int)(value - 'A') < 26 ||
                ((value + 0x40) & 0xff) < 0x20) {
                capitalize = 0;
            }
        } else {
            if (value == 0)
                return;
            if (capitalize) {
                capitalize = 0;
                *(char *)text &= ~0x20;
            }
        }
        index++;
        text++;
    }
}
