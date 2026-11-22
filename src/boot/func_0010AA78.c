/* func_0010AA78 -- 40 bytes.
 *
 * A function of the boot executable at 0x0010AA78; its placement is
 * listed in config/boot/bodies.tsv.
 *
 * rac5-sm-decomp names this body VEC_MakeScaleMat__FP4VEC3N20fff.
 * Ported from OpenRAC/rac5-sm-decomp src/boot/VEC_MakeScaleMat__FP4VEC3N20fff.c.
 */

typedef struct {
    float x;
    float y;
    float z;
} VEC3;

void func_0010AA78(VEC3 *a, VEC3 *b, VEC3 *c, float x, float y, float z) {
    a->x = x;
    a->y = 0.0f;
    a->z = 0.0f;
    b->x = 0.0f;
    b->y = y;
    b->z = 0.0f;
    c->x = 0.0f;
    c->y = 0.0f;
    c->z = z;
}
