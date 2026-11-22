/* Vsnprintf__9ApeStringPciPCcT1 -- 28 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * ApeString::Vsnprintf, a static wrapper that returns the result of the C
 * library's vsnprintf. The parameters come from the symbol, the callee's
 * prototype from the C library.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/higIoRead__FiPvUi.c:
 * the same body, which calls another import there.
 */

extern int vsnprintf(char *, unsigned int, const char *, char *);

int Vsnprintf__9ApeStringPciPCcT1(char *buffer, int size, const char *format, char *args)
{
    return vsnprintf(buffer, size, format, args);
}
