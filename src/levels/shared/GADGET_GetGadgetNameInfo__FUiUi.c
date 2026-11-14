/* GADGET_GetGadgetNameInfo__FUiUi -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the name information of a gadget: the block 0x10 bytes into the
 * gadget definition returned by GADGET_GetDefAtLevel for the requested level.
 */

extern unsigned char *GADGET_GetDefAtLevel__FUiUi(unsigned int a, unsigned int b);

unsigned char *GADGET_GetGadgetNameInfo__FUiUi(unsigned int a, unsigned int b)
{
    return GADGET_GetDefAtLevel__FUiUi(a, b) + 0x10;
}
