/* GADGET_GetGadgetNameInfo__FUiUi -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern unsigned char *GADGET_GetDefAtLevel__FUiUi(unsigned int a, unsigned int b);

unsigned char *GADGET_GetGadgetNameInfo__FUiUi(unsigned int a, unsigned int b)
{
    return GADGET_GetDefAtLevel__FUiUi(a, b) + 0x10;
}
