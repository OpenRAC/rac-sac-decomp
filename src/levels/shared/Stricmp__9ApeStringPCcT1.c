/* Stricmp__9ApeStringPCcT1 -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * ApeString::Stricmp, a static wrapper that returns the result of the C
 * library's strcasecmp. The parameters come from the symbol, the callee's
 * prototype from the C library.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/higIoRead__FiPvUi.c:
 * the same body, which calls another import there.
 */

extern int strcasecmp(const char *, const char *);

int Stricmp__9ApeStringPCcT1(const char *a, const char *b)
{
    return strcasecmp(a, b);
}
