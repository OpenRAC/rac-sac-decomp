/* GAMEUTIL_InitSpring_V4__FP9SPRING_V4P4VEC4fff -- 100 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * Copies four floats from a source block, or a default block, into a 4x4 float
 * block and fills the remaining slots.
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0136A0.c.
 */

extern float G_ZeroVector[];

void GAMEUTIL_InitSpring_V4__FP9SPRING_V4P4VEC4fff(float *a0, float *a1, float f12, float f13, float f14)
{
    float f;
    float g;
    float h;
    float k;
    float z;

    if (a1 == 0) {
        a1 = G_ZeroVector;
    }
    f = a1[0];
    z = 0.0f;
    a0[4] = f;
    a0[0] = f;
    g = a1[1];
    a0[5] = g;
    a0[1] = g;
    h = a1[2];
    a0[6] = h;
    a0[2] = h;
    k = a1[3];
    a0[7] = k;
    a0[3] = k;
    a0[11] = z;
    a0[10] = z;
    a0[9] = z;
    a0[8] = z;
    a0[12] = f12;
    a0[13] = f13;
    a0[14] = f14;
}
