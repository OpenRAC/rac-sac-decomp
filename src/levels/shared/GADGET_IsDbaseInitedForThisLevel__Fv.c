/* GADGET_IsDbaseInitedForThisLevel__Fv -- 12 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern unsigned char g_dbaseInitedForThisLevel;

unsigned char GADGET_IsDbaseInitedForThisLevel__Fv(void)
{
    return g_dbaseInitedForThisLevel;
}
