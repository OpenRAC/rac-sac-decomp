/* GLOBALVARS_GetPlayerTitaniumBoltCount__Fv -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Returns the titanium bolt count, which is global flag 0x37 read with
 * GLOBAL_GetFlag(0x37, 0xFF). The call result is propagated as is.
 */

extern unsigned int GLOBAL_GetFlag__FUiUc(unsigned int index, unsigned char mask);

unsigned int GLOBALVARS_GetPlayerTitaniumBoltCount__Fv(void)
{
    return GLOBAL_GetFlag__FUiUc(0x37, 0xFF);
}
