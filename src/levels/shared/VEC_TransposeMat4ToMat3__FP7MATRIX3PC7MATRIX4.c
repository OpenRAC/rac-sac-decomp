/* VEC_TransposeMat4ToMat3__FP7MATRIX3PC7MATRIX4 -- 88 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies the 3x3 block of the packed frame into the dense 3x3 of the node: the
 * source keeps the four-float stride, the destination the three-float one.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_126218.c.
 */

void VEC_TransposeMat4ToMat3__FP7MATRIX3PC7MATRIX4(float *dst, float *src)
{
    int i;

    for (i = 0; i < 3; i++) {
        int off = i * 4;
        float *s = (float *)(off + (int)src);
        float *d = dst + i * 3;
        int j;

        for (j = 2; j >= 0; j--) {
            *d = *s;
            s += 4;
            d++;
        }
    }
}
