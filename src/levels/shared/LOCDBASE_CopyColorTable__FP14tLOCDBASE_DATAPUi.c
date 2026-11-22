/* LOCDBASE_CopyColorTable__FP14tLOCDBASE_DATAPUi -- 60 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies the eight words at offset 0x18 of a record to the destination;
 * reports 0 for a null record.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_1326E8.c.
 */

int LOCDBASE_CopyColorTable__FP14tLOCDBASE_DATAPUi(char *src, int *dst)
{
    unsigned int i;
    int *p;

    if (src != 0) {
        p = (int *)(src + 0x18);
        for (i = 0; i < 8; i++) {
            *dst++ = *p++;
        }
        return 1;
    }
    return 0;
}
