/* MatrixMul__FP8MATRIX4321MatrixOpTranslateEnumPC7MATRIX4fff -- 172 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Packs a 4x4 matrix into a 3x4 one and moves its translation row by a point.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/shared/LEVEL_01_128C00.c.
 */

void MatrixMul__FP8MATRIX4321MatrixOpTranslateEnumPC7MATRIX4fff(float *destination, void *unused, const float *source,
                 float x, float y, float z)
{
    float v0 = source[0];
    float v1 = source[1];
    float v2 = source[2];
    float v3 = source[4];
    float v4 = source[5];
    float v5 = source[6];
    float v6 = source[8];
    float v7 = source[9];
    float v8 = source[10];
    float v9 = source[12];
    float v10 = source[13];
    float v11 = source[14];
    float t9 = x * v0 + y * v3 + z * v6 + v9;
    float t10 = x * v1 + y * v4 + z * v7 + v10;
    float t11 = x * v2 + y * v5 + z * v8 + v11;
    destination[0] = v0;
    destination[1] = v1;
    destination[2] = v2;
    destination[3] = v3;
    destination[4] = v4;
    destination[5] = v5;
    destination[6] = v6;
    destination[7] = v7;
    destination[8] = v8;
    destination[9] = t9;
    destination[10] = t10;
    destination[11] = t11;
}
