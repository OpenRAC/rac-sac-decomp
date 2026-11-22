/* Strnicmp__9ApeStringPCcT1i -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * ApeString::Strnicmp, a static wrapper that returns the result of the C
 * library's strncasecmp. The parameters come from the symbol, the callee's
 * prototype from the C library.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/higIoRead__FiPvUi.c:
 * the same body, which calls another import there.
 */

extern int strncasecmp(const char *, const char *, unsigned int);

int Strnicmp__9ApeStringPCcT1i(const char *a, const char *b, int count)
{
    return strncasecmp(a, b, count);
}
