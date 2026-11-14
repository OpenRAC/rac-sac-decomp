/* GLOBALVARS_GetPlayerTitaniumBoltCount__Fv -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern unsigned int GLOBAL_GetFlag__FUiUc(unsigned int index, unsigned char mask);

unsigned int GLOBALVARS_GetPlayerTitaniumBoltCount__Fv(void)
{
    return GLOBAL_GetFlag__FUiUc(0x37, 0xFF);
}
