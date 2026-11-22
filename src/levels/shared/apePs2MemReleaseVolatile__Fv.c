/* apePs2MemReleaseVolatile__Fv -- 32 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/frontend/FRONTEND_003E40.c.
 */

extern char D_FE_00248250[];

void ReleaseControl__13ApePs2MemHeap(void *);

void apePs2MemReleaseVolatile__Fv(float a, float b, float c, float d)
{
    ReleaseControl__13ApePs2MemHeap(D_FE_00248250);
}
