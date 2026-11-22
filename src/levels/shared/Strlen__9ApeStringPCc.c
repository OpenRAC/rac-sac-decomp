/* Strlen__9ApeStringPCc -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * ApeString::Strlen, a static wrapper that returns the result of the C
 * library's strlen. The parameters come from the symbol, the callee's
 * prototype from the C library.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/higIoRead__FiPvUi.c:
 * the same body, which calls another import there.
 */

extern unsigned int strlen(const char *);

unsigned int Strlen__9ApeStringPCc(const char *s)
{
    return strlen(s);
}
