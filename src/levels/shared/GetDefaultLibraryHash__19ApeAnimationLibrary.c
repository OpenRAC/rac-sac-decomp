/* GetDefaultLibraryHash__19ApeAnimationLibrary -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_003E40.c.
 */

extern char D_FE_0012E288[];

void GenerateHash32__7ApeHashPCc(void *);

void GetDefaultLibraryHash__19ApeAnimationLibrary(float a, float b, float c, float d)
{
    GenerateHash32__7ApeHashPCc(D_FE_0012E288);
}
