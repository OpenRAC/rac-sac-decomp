/* LOCDBASE_IsThisLanguageInitialized__FP14tLOCDBASE_DATAUc -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Tests one bit of the flag word.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/FRONTEND_01F928.c.
 */

int LOCDBASE_IsThisLanguageInitialized__FP14tLOCDBASE_DATAUc(int *p, int bit)
{
    int mask = 1 << bit;

    return (p[1] & mask) != 0;
}
