/* NavCollision_Setup__FP12NavCollisionPC7MATRIX4b -- 188 bytes.
 *
 * One source for every placement of this function in the level modules;
 * the placements are listed in config/levels/bodies.tsv.
 *
 * The level's default transform is copied into the caller's record, the record
 * is handed to the animator and the flags are cleared (or set, when the level
 * asks for the animated variant).
 *
 * Ported from OpenRAC/rac5-sm-decomp src/levels/08_dayni_moon/LEVEL_08_20A5E0.c.
 */

typedef struct {
    float f[8];
    int kind;
} Base;

typedef struct {
    Base base;
    int a;
    float scale;
    int b;
    int c;
    int d;
    int e;
    int f2;
    int g;
} Dest;

extern Base g_identityMatrix3;

extern void VEC_CopyMat4Mat3__FP7MATRIX3PC7MATRIX4(Dest *dst, int mode);

void NavCollision_Setup__FP12NavCollisionPC7MATRIX4b(Dest *dst, int mode, int flag)
{
    dst->base = g_identityMatrix3;

    VEC_CopyMat4Mat3__FP7MATRIX3PC7MATRIX4(dst, mode);

    dst->a = 0;
    dst->scale = 1.0f;
    dst->d = 0;
    dst->e = 0;
    dst->f2 = 0;
    dst->b = 0;
    dst->c = 0;

    if (flag) {
        dst->g = 1;
    } else {
        dst->g = 0;
    }
}
