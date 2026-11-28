/* GDEMESH_GetFreeMeshResourceHandle__Fv -- 24 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 */

extern unsigned int gENG_nResources;

unsigned int GDEMESH_GetFreeMeshResourceHandle__Fv(void)
{
    return gENG_nResources++;
}
