/* PAR_GetSystemMaterialFormat__Fi -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern char D_L01_0032240C[];

char *PAR_GetSystemMaterialFormat__Fi(int index)
{
    return D_L01_0032240C + index * 0x2C;
}
