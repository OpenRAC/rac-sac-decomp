/* VEC_CopyMat3Mat4__FP7MATRIX4PC7MATRIX3 -- 76 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies nine floats from a contiguous source into a destination whose fields
 * sit at 0x00,0x04,0x08 / 0x10,0x14,0x18 / 0x20,0x24,0x28.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/02_rykan_v/LEVEL_02_129E78.c.
 */

typedef struct {
    float f[9];
} Src;

typedef struct {
    float a[3];
    float pad0;
    float b[3];
    float pad1;
    float c[3];
} Dst;

void VEC_CopyMat3Mat4__FP7MATRIX4PC7MATRIX3(Dst *dst, Src *src)
{
    dst->a[0] = src->f[0];
    dst->a[1] = src->f[1];
    dst->a[2] = src->f[2];
    dst->b[0] = src->f[3];
    dst->b[1] = src->f[4];
    dst->b[2] = src->f[5];
    dst->c[0] = src->f[6];
    dst->c[1] = src->f[7];
    dst->c[2] = src->f[8];
}
