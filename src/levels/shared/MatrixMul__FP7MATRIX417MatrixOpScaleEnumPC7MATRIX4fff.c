/* MatrixMul__FP7MATRIX417MatrixOpScaleEnumPC7MATRIX4fff -- 160 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Rebuild a 4x4 matrix: rows 0..2 are scaled by s0/s1/s2, row 3 is copied, and
 * the fourth column becomes (0,0,0,1). The three zero words of the fourth
 * column are integer fields, hence the zero stores at 0x0C, 0x1C and 0x2C.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_128E28.c.
 */

void MatrixMul__FP7MATRIX417MatrixOpScaleEnumPC7MATRIX4fff(float *out, int unused, float *in, float s0, float s1, float s2)
{
    float v0 = s0 * in[0];
    float v1 = s0 * in[1];
    float v2 = s0 * in[2];
    float v3 = s1 * in[4];
    float v4 = s1 * in[5];
    float v5 = s1 * in[6];
    float v6 = s2 * in[8];
    float v7 = s2 * in[9];
    float v8 = s2 * in[10];
    float v9 = in[12];
    float v10 = in[13];
    float v11 = in[14];

    out[0] = v0;
    out[15] = 1.0f;
    out[1] = v1;
    out[2] = v2;
    out[4] = v3;
    out[5] = v4;
    out[6] = v5;
    out[8] = v6;
    out[9] = v7;
    out[10] = v8;
    out[12] = v9;
    out[13] = v10;
    out[14] = v11;
    *(int *)(out + 7) = 0;
    *(int *)(out + 11) = 0;
    *(int *)(out + 3) = 0;
}
