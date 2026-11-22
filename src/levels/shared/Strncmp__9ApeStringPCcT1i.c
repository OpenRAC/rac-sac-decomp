/* Strncmp__9ApeStringPCcT1i -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * ApeString::Strncmp, a static wrapper that returns the result of the C
 * library's strncmp. The parameters come from the symbol, the callee's
 * prototype from the C library.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/higIoRead__FiPvUi.c:
 * the same body, which calls another import there.
 */

extern int strncmp(const char *, const char *, unsigned int);

int Strncmp__9ApeStringPCcT1i(const char *a, const char *b, int count)
{
    return strncmp(a, b, count);
}
