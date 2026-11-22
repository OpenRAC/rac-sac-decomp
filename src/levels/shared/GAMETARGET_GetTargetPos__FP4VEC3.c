/* GAMETARGET_GetTargetPos__FP4VEC3 -- 36 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Recopie le triplet de reference dans le mobile.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/03_kalidon/LEVEL_03_01A088.c.
 */

typedef struct {
    float x;
    float y;
    float z;
} V3;

extern V3 D_L01_0031AB24;

void GAMETARGET_GetTargetPos__FP4VEC3(V3 *a0)
{
    a0->x = D_L01_0031AB24.x;
    a0->y = D_L01_0031AB24.y;
    a0->z = D_L01_0031AB24.z;
}
