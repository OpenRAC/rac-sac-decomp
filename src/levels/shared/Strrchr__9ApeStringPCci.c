/* Strrchr__9ApeStringPCci -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * ApeString::Strrchr, a static wrapper that returns the result of the C
 * library's strrchr. The parameters come from the symbol, the callee's
 * prototype from the C library.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/higIoRead__FiPvUi.c:
 * the same body, which calls another import there.
 */

extern char *strrchr(const char *, int);

char *Strrchr__9ApeStringPCci(const char *s, int c)
{
    return strrchr(s, c);
}
