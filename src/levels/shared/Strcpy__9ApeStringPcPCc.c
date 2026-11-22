/* Strcpy__9ApeStringPcPCc -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * ApeString::Strcpy, a static wrapper that returns the result of the C
 * library's strcpy. The parameters come from the symbol, the callee's
 * prototype from the C library.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/higIoRead__FiPvUi.c:
 * the same body, which calls another import there.
 */

extern char *strcpy(char *, const char *);

char *Strcpy__9ApeStringPcPCc(char *dest, const char *src)
{
    return strcpy(dest, src);
}
